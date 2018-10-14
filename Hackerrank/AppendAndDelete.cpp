#include <bits/stdc++.h>
using namespace std;
string appendAndDelete(string s,string t,int k);
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,t;
		cin>>s;
		cin>>t;
		int k;
		cin>>k;
        cout<<appendAndDelete(s,t,k)<<endl;
	}
	return 0;
}
string appendAndDelete(string s,string t,int k){
	int minimum_steps;
    if(s[0] != t[0]){
         minimum_steps = s.length()+t.length();
    }
    else{
    	int i=0;
    	while((s[i] != '\0') && (t[i]!='\0') && (s[i] == t[i])){
    		  i++;
    	}
        //
        if(i == s.length()){
        	if(i == t.length()){
        		minimum_steps = k-1;
        	}
        	else{
        		minimum_steps = t.length() - s.length();
        	}
        }
        else if(i == t.length()){
        	if(i == s.length()){
        		minimum_steps = k-1;
        	}
            else{
            	minimum_steps = s.length() - t.length();
            }
        }
        else if((i != s.length()) && (i != t.length())){
        	minimum_steps = s.length() - i  + t.length() - i ;
        }
    }
    if(minimum_steps > k){
    	return "No";
    }
    else{
    	return "Yes";
    }
}