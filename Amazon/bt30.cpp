#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<2*n+1+3*(n-1)*n/2+(n-2)*(n-1)*n/2<<endl;
	}
	return 0;
}