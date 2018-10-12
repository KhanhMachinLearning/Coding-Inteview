#include <bits/stdc++.h>
using namespace std;
int count_way(int m,int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
        cout<<count_way(m,n)<<endl;
	}
	return 0;
}
int count_way(int m,int n){
	int table[m+1][n+1];
    memset(table,0,sizeof(table));
    for(int i=1;i<=n;i++)
    	table[1][i] = 1;
    for(int j=1;j<=m;j++)
    	table[j][1] = 1;
    for(int i=2;i<=m;i++){
    	for(int j=2;j<=n;j++){
    		table[i][j] = table[i][j-1] + table[i-1][j];
    	}
    }
    return table[m][n];
}