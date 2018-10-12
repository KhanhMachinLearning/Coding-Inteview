#include <bits/stdc++.h>
using namespace std;
int Maximum_Value(string s);
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
        cout<<Maximum_Value(s)<<endl;
	}
	return 0;
}
int Maximum_Value(string s){
	int max=0;
	int n;
    int i=0;
    while(i<s.length()){
    	if(!isdigit(s[i])){
    		i++;
    	}
        else{
           int j=i;
           n=0;
           while(isdigit(s[j])){
           	 n = 10*n+(s[j]-'0');
           	 j++;
           	}
            i = j;
            max = max > n ? max : n;
        }
    }
    return max;
}