#include <bits/stdc++.h>
using namespace std;
int First_Set_Bits(int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n == 0)
			cout<<0<<endl;
		else{
          cout<<First_Set_Bits(n)+1<<endl;
        }
	}
	return 0;
}
int First_Set_Bits(int n){
	int count=0;
	while(n){
        if((n & 1) == 1){
        	return count;
        }
        else{
        	count++;
        }
        n >>= 1;
	}
	return count;
}