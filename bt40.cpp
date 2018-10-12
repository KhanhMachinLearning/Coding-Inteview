#include <bits/stdc++.h>
using namespace std;
int strstr(string s,string x);
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,x;
		cin>>s;
		cin>>x;
        cout<<strstr(s,x)<<endl;    
	}
	return 0;
}
int strstr(string s,string x){
	int j;
    for(int i=0;i<s.length();i++){
    	for(j=0;j<x.length() && (s[j+i] == x[j]);j++)
    	      ;
    	if(j == x.length())
    		  return i;
    }
    return -1;
}