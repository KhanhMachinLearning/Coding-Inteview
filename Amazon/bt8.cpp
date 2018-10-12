#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,money;
	    cin>>n>>money;
	    if(n%2 == 1){
           cout<<(n/2+1)*money<<endl;
	    }
	    else{
           cout<<n/2 * money<<endl;
	    }
	}
	return 0;
}