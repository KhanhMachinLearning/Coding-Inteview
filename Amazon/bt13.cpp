#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		int count=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int j=0;j<m;j++)
			cin>>b[j];
		sort(a,a+n);
		sort(b,b+m);
		set<int> s;
		for(int i=0;i<n;i++)
			s.insert(a[i]);
		for(int j=0;j<m;j++){
			if(s.find(b[j]) != s.end()){
				count++;
				cout<<b[j]<<" ";
			}
		}
	    //
	    if(count == 0)
	    	cout<<"Zero"<<endl;
	    else
	    	cout<<"\n";
	}
	return 0;
}