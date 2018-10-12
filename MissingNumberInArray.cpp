#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n-1];
		int result =  0;
		for(int i=1;i<=n;i++)
			result ^= i;
		for(int i=0;i<n-1;i++){
			cin>>a[i];
			result ^= a[i];
		}
        cout<<result<<endl;
	}
	return 0;
}