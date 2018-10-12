#include <bits/stdc++.h>
using namespace std;
bool Check_Set_Bits(int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
	    cin>>n;
        if(Check_Set_Bits(n)){
        	cout<<"YES"<<endl;
        }
        else{
        	cout<<"NO"<<endl;
        }
	}
	return 0;
}
bool Check_Set_Bits(int n){
	while(n){
		if((n & 1) != 1){
			return false;
		}
		n >>= 1;
	}
	return true;
}