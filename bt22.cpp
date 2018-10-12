#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			a[a[i]%k] += k;
		int max = a[0]/k;
		int result = 0;
		for(int i=1;i<n;i++){
			if(max == a[i]/k){
				result = result > i? i:result;
			}
			else if(max < a[i]/k){
				max = a[i]/k;
				result = i;
			}
		}
		cout<<result<<endl;
	}
	return 0;
}