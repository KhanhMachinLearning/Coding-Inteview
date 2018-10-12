#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-1;i++){
            int max = a[i+1];
            for(int j=i+1;j<n;j++){
            	if(max < a[j]){
            		max = a[j];
            	}
            }
            a[i] = max;
            cout<<a[i]<<" ";
		}
		cout<<-1<<endl;
	}
	return 0;
}