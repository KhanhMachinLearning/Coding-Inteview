#include <bits/stdc++.h>
using namespace std;
int a[10000000];
int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	for(int i=0;i<n;i++)
    		cin>>a[i];
    	int l,r;
    	cin>>l>>r;
    	for(int i=0;i<l-1;i++)
    		cout<<a[i]<<" ";
    	for(int i=r-1;i>=l-1;i--)
    		cout<<a[i]<<" ";
    	for(int i=r;i<n;i++)
    		cout<<a[i]<<" ";
    	cout<<endl;
    }
	return 0;
}