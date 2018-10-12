#include <bits/stdc++.h>
using namespace std;
int Bit_Difference(int a,int b);
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
        cout<<Bit_Difference(a,b)<<endl;
	}
	return 0;
}
int Bit_Difference(int a,int b){
	int count=0;
	int n = a ^ b;
	while(n){
		count += n & 1;
		n >>= 1;
	}
	return count;
}