#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n;
		cin>>d;
		int a[n];
		int b[d];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<d;i++)
			b[i] = a[i];
		for(int i=0;i<n-d;i++)
			a[i] = a[i+d];
		for(int i=n-d;i<n;i++)
			a[i] = b[i-n+d];
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
	}
	return 0;
}