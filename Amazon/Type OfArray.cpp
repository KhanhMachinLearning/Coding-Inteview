#include <bits/stdc++.h>
using namespace std;
void chech_array(int a[],int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
        chech_array(a,n);
	}
	return 0;
}
void chech_array(int a[],int n){
	int i=0;
	while(i < n-1 && a[i]<=a[i+1])
		  i++;
	if(i == n-1){
        cout<<a[n-1]<<" "<<1<<"\n";//asscending order
        return ;
	}
	//	
	if(i == 0){
        while(i < n-1 && a[i] >= a[i+1])
        	i++;
        if(i == n-1){
        	cout<<a[0]<<" "<<2<<"\n";//descending order
        	return ;
        }
        //
        if(a[0] > a[i+1]){
           cout<<max(a[0],a[i+1])<<" "<<4<<"\n";//asscending rotate
           return ;
        }
        else{
           cout<<max(a[0],a[i+1])<<" "<<3<<"\n";//ascending rotate
           return ;
        }
	}
	//
	if(i < n-1 && a[0] > a[i+1]){
           cout<<a[i]<<" "<<4<<"\n";
           return ;
	}
    else {
    	   cout<<a[i]<<" "<<3<<"\n";
    	   return ;
    }
    //
}