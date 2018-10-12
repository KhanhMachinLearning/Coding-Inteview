#include <bits/stdc++.h>
using namespace std;
int count_digit(int d);
int main(){
	int t;
	cin>>t;
	while(t--){
		int d;
		cin>>d;
        cout<<(long long)(pow(10,d)-91-729*(pow(9,d-2)-1)/8)<<endl;
	}
	return 0;
}