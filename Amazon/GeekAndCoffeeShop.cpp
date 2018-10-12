#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
    while(t--){
    	int n,m;
    	cin>>n>>m;
    	for(int i=1;i<=m-1;i++)
    		n /= 2;
    	cout<<n<<endl;
    }
	return 0;
}