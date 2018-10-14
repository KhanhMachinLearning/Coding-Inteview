#include <bits/stdc++.h>
using namespace std;
string reverse(string s);
string decimal_to_string(int n);
int main(){
    int t;
    cin>>t;
    while(t--){
    	int m,k,n;
    	cin>>m>>k>>n;
    	string s,s1,s2;
    	s = decimal_to_string(m);
    	s = reverse(s);
    	s1 = s;
    	s2 = s;
    	for(int i=0;i<n;i++){
    		s1.resize(2*s.size());
    		for(int j=0;j<s2.size();j++){
    			if(s2[j]=='0'){
                     s1[2*j]='0';
                     s1[2*j+1]='1';
    			}
    			else if(s2[j]=='1'){
                     s1[2*j]='1';
                     s1[2*j+1]='0';
    			}
    		}
    		s.resize(2*s.size());
    		s2 = s1;
    	}
    	cout<<s1[k]<<endl;
    }
	return 0;
}
string reverse(string s){
   for(int i=0,j=s.length()-1;i<j;i++,j--)
   	    swap(s[i],s[j]);
   return s;
}
string decimal_to_string(int n){
    string s ="";
    while(n){
    	s = s + (n%2 ==0 ? "0":"1");
    	n/=2;
    }
    return s;
}