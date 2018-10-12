#include <bits/stdc++.h>
using namespace std;
int Result(int a[],int n,int x);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
        cout<<Result(a,n,x)<<endl;
	}
	return 0;
}
int Result(int a[],int n,int x){
    int count=0;
    sort(a,a+n);
    for(int i=0;i<=n-2;i++){
        int j = i+1;
        int k = n-1;
        while(j<k){
        	if((a[i] + a[j] + a[k]) >= x){
        		k--;
        	}
        	else{
        		count += (k-j);
        		j++;
        	}
        }
    }
    return count;
}