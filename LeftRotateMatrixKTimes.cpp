#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,k;
		cin>>m>>n>>k;
		int a[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
			    cin>>a[i][j];
			}
		}
		//
		for(int p=0;p<k;p++){
			for(int i=0;i<m;i++){
				int temp = a[i][0];
				for(int j=0;j<n-1;j++){
					a[i][j] = a[i][j+1];
				}
				a[i][n-1] = temp;
			}
		}
		//
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cout<<a[i][j]<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}