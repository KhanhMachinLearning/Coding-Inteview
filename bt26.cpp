#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int count=0;
		for(int i=0;i<n-2;i++){
			int k = i+2;
			for(int j=i+1;j<n;j++){
				while(k<n){
				  if((ll)((ll)(pow(a[i],2))+(ll)(pow(a[j],2))) == (ll)(pow(a[k],2))){
				  	  count++;
				  	  break;
				  }
				  else
				  	k++;
				}
			}
		}
		if(count == 0)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
	return 0;
}