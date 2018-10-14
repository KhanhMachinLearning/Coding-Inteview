#include <bits/stdc++.h>
using namespace std;
int Anagram_String(string s1,string s2);
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1;
		cin>>s2;
        cout<<Anagram_String(s1,s2)<<endl;
	}
	return 0;
}
int Anagram_String(string s1,string s2){
	stack<char> s;
    int count=0;
	for(int j=s1.length()-1;j>=0;j--)
		s.push(s1[j]);
    while(!s.empty()){
    	char c = s.top();
    	int i=0;
    	while(s2[i]!='\0'){
    		if((s2[i]!='1')&&(c == s2[i])){
                  s2[i]='1';
                  count++;
                  break;
    		}
    		i++;
    	}
    	s.pop();
    }
    return s1.length() + s2.length() - 2*count;
}