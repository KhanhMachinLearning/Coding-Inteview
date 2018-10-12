#include <bits/stdc++.h>
using namespace std;
int a[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,
          127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199};
int size = sizeof(a) / sizeof(a[0]);
int check_prime(int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<size;i++){
			for(int j=0;j<size;j++){
				if(a[i]*a[j] <= n){
					cout<<a[i]<<" "<<a[j]<<" ";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}