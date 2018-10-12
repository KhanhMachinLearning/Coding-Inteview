#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		ll count=0;
		sort(a,a+n);
		for(ll i=0;i<n-2;i++){
			ll k = i+2;
			for(ll j=i+1;j<n;j++){
				while(k<n && ((a[j]+a[i]) > a[k]))
					  k++;
				count += k - j-1;	
			}
		}
		cout<<count<<endl;
	}
	return 0;
}