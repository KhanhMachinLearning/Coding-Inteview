#include <bits/stdc++.h>
using namespace std;
string reverse(string s,int i,int j);
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
        int i=0,j;
        while(i<s.length()){
        	j=i;
        	while(s[j]!='.' && j < s.length())
        		 j++;
        	s = reverse(s,i,j-1);
        	i = j+1;	
        }
        cout<<s<<endl;
	}
	return 0;
}
string reverse(string s,int i,int j){
   for(int p=i,q=j;p<q;p++,q--)
   	  swap(s[p],s[q]);
   return s;
}