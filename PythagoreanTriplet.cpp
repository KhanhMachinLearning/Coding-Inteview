#include <bits/stdc++.h>
using namespace std;
bool Check_Pythagrean_Triplet(int a[],int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
        if(Check_Pythagrean_Triplet(a,n))
        	cout<<"Yes"<<endl;
        else
        	cout<<"No"<<endl;
	}
	return 0;
}
bool Check_Pythagrean_Triplet(int a[],int  n){
    for(int i=0;i<n;i++)
    	a[i] = a[i] * a[i];
    sort(a,a+n);
    for(int i=n-1;i>=2;i--){
    	int l = 0;
    	int r = i-1;
    	while(l<r){
    		if((a[l] + a[r]) == a[i])
    			return true;
    		(a[l] + a[r] > a[i]) ? r-- : l++; 
    	}
    }
    return true;
}