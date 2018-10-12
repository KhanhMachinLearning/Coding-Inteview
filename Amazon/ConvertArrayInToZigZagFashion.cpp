#include <bits/stdc++.h>
using namespace std;
void Conver_Array(int a[],int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
        Conver_Array(a,n);
	}
	return 0;
}
void Conver_Array(int a[],int n){
	bool flag = true;
	for(int i=0;i<n-1;i++){
		if(flag){
             if(a[i] > a[i+1])
             	swap(a[i],a[i+1]);
		}
		else{
             if(a[i] < a[i+1])
               swap(a[i],a[i+1]);
		} 
		flag = !flag;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
}