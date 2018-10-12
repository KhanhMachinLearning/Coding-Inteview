#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int count = 0;
		for(int i=0;i<s.length();i++){
             if(s[i]=='1'){
             	count++;
             }
		}
		cout<<(ll)(count*(count-1))/2<<endl;
	}
	return 0;
}