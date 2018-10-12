#include <bits/stdc++.h>
using namespace std;
int count(int n,int x);
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int u,l;
		cin>>l>>u;
		if(u-l < 2)
			cout<<0<<endl;
		else{
		  int count1=0;
		  for(int i=l+1;i<u;i++){
               count1 += count(i,x);
		  }
		  cout<<count1<<endl;
		}
	}
	return 0;
}
int count(int n,int x){
	int count=0;
	while(n){
		if(n%10 == x){
             count++;
		}
		n/=10;
	}
	return count;
}