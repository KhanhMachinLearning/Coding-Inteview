#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
        for(int i=0;i<n;i++)
        	cin>>a[i];
        int i=0,j=0,k=0;
        while(i<n && j<n){
            while(a[i]<0)
              i++;
            b[k++]=a[i];
            while(a[j]>=0)
              j++;
            b[k++]=a[j]; 
            i++;
            j++;       
        }
        //
        for(int i=0;i<n;i++)
        	cout<<b[i]<<" ";
        cout<<"\n";
	}
	return 0;
}