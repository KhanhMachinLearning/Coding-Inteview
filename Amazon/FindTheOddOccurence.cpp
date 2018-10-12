#include <bits/stdc++.h>
using namespace std;
int GetOddOccurence(int a[],int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i]; 
        cout<<GetOddOccurence(a,n)<<endl;
	}
	return 0;
}
int GetOddOccurence(int a[],int n){
	int result = 0;
	for(int i=0;i<n;i++)
		result = result ^ a[i];
	return result;
}
