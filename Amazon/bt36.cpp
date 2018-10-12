#include <bits/stdc++.h>
using namespace std;
void convert_binary(int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
        for(int i=1;i<=n;i++)
        	convert_binary(i);
        cout<<"\n"; 
	}
	return 0;
}
void convert_binary(int n){
	 stack<int> q;
     while(n){
     	q.push(n%2);
     	n/=2;
     }
     //
     while(!q.empty()){
     	cout<<q.top();
     	q.pop();
     }
     cout<<" ";
}