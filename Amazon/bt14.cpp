#include <bits/stdc++.h>
using namespace std;
int convertFive(int n);
int main(){
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
       cout<<convertFive(n)<<endl;
	}
	return 0;
}
int convertFive(int n){
    int index = -1;
    int n1=n;
    while(n){
    	if(n%10 == 0){
            index++;
            n1 += 5*pow(10,index);
    	}
        else{
            index++;
        }
        n/=10;
    }
    return n1;
}