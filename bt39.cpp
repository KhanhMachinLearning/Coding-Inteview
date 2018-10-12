#include <bits/stdc++.h>
using namespace std;
bool check(char c,string s2);
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		stack<char> s;
		cin>>s1;
		cin>>s2;
		//
		for(int i=s1.length()-1;i>=0;i--)
              s.push(s1[i]);
        while(!s.empty()){
        	char c = s.top();
            if(check(c,s2)){
            	s.pop();
            }
            else{
            	cout<<c;
            	s.pop();
            }
        }  
        cout<<"\n";
	}
	return 0;
}
bool check(char c,string s2){
	for(int j=0;j<s2.length();j++){
		if(c == s2[j]){
			return true;
		}
	}
	return false;
}