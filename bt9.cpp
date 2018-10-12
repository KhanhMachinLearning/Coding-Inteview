#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n*m];
		int b[n+1];
		int new_count=0;
		int min = 1000;
		int index_min;
		for(int i=0;i<n*m;i++)
			cin>>a[i];
		for(int i=n;i>=1;i--){
			int count=0;
			for(int j=1;j<=m;j++){
				if(a[i*m-j] == 1){
					count++;
				}
			}
		    b[i]=count;	
		    if(count!=0){
		    	new_count++;
		    	min = min < count ? min : count;
		    }
		}
		//
		for(int i=1;i<=n;i++){
			if(b[i] == min){
				index_min = i;
				break;
			}
		}
	    //
	    if(new_count == 0)
	    	cout<<-1<<endl;
	    else
	    	cout<<index_min-1<<endl;
	}
	return 0;
}