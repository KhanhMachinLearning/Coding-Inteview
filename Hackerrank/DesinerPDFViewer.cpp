#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int length_[26];
        for(int i=0;i<26;i++)
           cin>>length_[i];
        string s;
        cin>>s;
        int max = length_[s[0]-'a'];
        for(int i=1;i<s.length();i++){
        	  if(max < length_[s[i]-'a']){
        	  	  max = length_[s[i]-'a'];
        	  }
        }
        //
        int result = s.length() * max;
        cout<<result<<endl;    
	}
}