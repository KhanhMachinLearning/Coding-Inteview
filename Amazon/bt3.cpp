#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		int count=0;
        for(int i=1;i<=n;i++)
        	cin>>a[i];
        for(int i=1;i<=n;i++){
        	if(a[i] == i){
        		cout<<i<<" ";
        		count++;
        	}
        }
        if(count == 0)
        	cout<<"NOT FOUND"<<endl;
        else
        	cout<<"\n";
	}
	return 0;
}