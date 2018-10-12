#include <bits/stdc++.h>
using namespace std;
void binary_search_extend(int a[],int n,int x);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
         binary_search_extend(a,n,x);
	}
	return 0;
}
void binary_search_extend(int a[],int n,int x){
	int first=0,last=n-1;
	int first_occurence,last_occurence;
	int count=0;
	while(first <= last){
		int mid = (last + first)/2;
		if(x > a[mid]){
            first = mid + 1;
		}
		else if(x < a[mid]){
            last = mid - 1;
		}
		else{
			count++;
            first_occurence = mid;
            while((a[first_occurence] == x) &&(first_occurence >=0))
            	  first_occurence--;
            last_occurence  = mid;
            while((a[last_occurence] == x) && (last_occurence < n))
            	  last_occurence ++;
            break;	
		}
	}
	if(count == 0)
		cout<<-1<<endl;
	else
	    cout<<first_occurence+1<<" "<<last_occurence-1<<endl;
}