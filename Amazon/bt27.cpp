#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int w;
		cin>>w;
		ll a[w+1];
		a[1] = 1;
		a[2] = 2;
		for(int i=3;i<=w;i++){
             a[i] = (ll)((ll)a[i-1] + (ll)a[i-2]); 
		}
		cout<<a[w]<<endl;
	}
	return 0;
}