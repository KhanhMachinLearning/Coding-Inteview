#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   int a[n];
	   int count=0;
	   for(int i=0;i<n;i++)
	   	  cin>>a[i];
	   	for(int i=0;i<n;i++){
	   		if(a[i] == 1){
	   			count++;
	   			cout<<i<<endl;
	   			break;
	   		}
	   	}
        //
        if(count == 0)
        	cout<<-1<<endl;
	}
	return 0;
}