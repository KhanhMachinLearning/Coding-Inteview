#include <bits/stdc++.h>
using namespace std;
int binary_search_extend(int a[],int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
        cout<<binary_search_extend(a,n)<<endl;
	}
	return 0;
}
int binary_search_extend(int a[],int n){
	int first=0,last=n-1;
	while(first <= last){
		int mid = (first + last)/2;
		if((mid == n-1 && a[mid] > a[mid-1]) || 
			(mid >0 && mid <n-2 && a[mid] > a[mid+1]) && (a[mid] > a[mid-1])){
			return a[mid];
		}
		else if(a[mid] < a[mid+1] && mid < n-1){
			first = mid+1;
		}
		else if(a[mid] < a[mid-1] && mid > 0){
            last  = mid-1;
		}
	}
	return -1;
}