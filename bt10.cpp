#include <bits/stdc++.h>
using namespace std;
int Atoi(string s);
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
        cout<<Atoi(s)<<endl;
	}
	return 0;
}
int Atoi(string s){
	int i=0,n=0;
	int sign;
    while(isspace(s[i]))
    	  i++;
    sign = (s[i] == '-' ? -1 : 1);
    if(s[i] == '-' || s[i] == '+')
    	i++;
    for(int j=i;j<s.length();j++){
    	if(!isdigit(s[j])){
    		return -1;
    	}
    	else if(isdigit(s[i])){
    		n = 10*n+(s[j]-'0');
    	}
    }
    return sign * n;
}