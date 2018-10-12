#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll count_way(int m,int n,int x);
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,x;
		cin>>m>>n>>x;
        cout<<count_way(m,n,x)<<endl;
	}
	return 0;
}
ll count_way(int m,int n,int x){
   if(n >= x)
   	return (n==x);
   else if(m*n <= x)
   	return (m*n == x);
   ll table[n+1][x+1];
   memset(table,0,sizeof(table));
   for(int j=1;j<=x && j<=m;j++)
   	     table[1][j] = 1;
   for(int i=2;i<=n;i++){
   	  for(int j=1;j<=x;j++){
   	  	for(int k=1;k<=m && k<j;k++){
   	  		table[i][j] += table[i-1][j-k];
   	  	}
   	  }
   }
   return table[n][x];
}