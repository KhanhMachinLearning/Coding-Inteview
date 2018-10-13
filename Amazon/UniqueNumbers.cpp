#include <bits/stdc++.h>
using namespace std;
bool Unique_Numbers(int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		for(int i=m;i<=n;i++){
			if(Unique_Numbers(i)){
				cout<<i<<" ";
			}
		}
        cout<<"\n";
	}
	return 0;
}
bool Unique_Numbers(int n){
     int count[10] = {0};
     while(n){
     	 count[n%10]++;
     	 n/=10; 
     }
     for(int i=0;i<10;i++){
     	if(count[i] > 1)
     		return false;
     }
     return true;
} 