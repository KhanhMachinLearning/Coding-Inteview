#include <bits/stdc++.h>
using namespace std;
int Total_Set_Bits(int n);
int Sum(int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
        cout<<Total_Set_Bits(n)<<endl;
	}
	return 0;
}
int Sum(int n){
	int count=0;
	while(n){
        count += n & 1;
        n >>= 1;
	}
	return count;
}
int Total_Set_Bits(int n){
	int count=0;
	int i;
	for(i=1;i<=n;i++){
         count += Sum(i);
	}
	return count;
}