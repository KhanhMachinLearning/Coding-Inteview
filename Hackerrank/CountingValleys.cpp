#include <bits/stdc++.h>
using namespace std;
int countingValleys(string s,int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
        cout<<countingValleys(s,n)<<endl;
	}
}
int countingValleys(string s,int n){
	int sum = 0;
	int result = 0;
	int count_negative = 0;
	int count_positive = 0;
	for(int i=0;i<n;i++){
		if(s[i] == 'U'){
			sum += 1;
		}
		else if(s[i] == 'D'){
			sum -= 1;
		}
		//
		if(sum < 0){
			count_positive = 0;
			count_negative ++;
		}
		else if(sum > 0){
			count_negative = 0;
			count_positive ++;
		}
		//
	    if((sum == 0) && (count_positive == 0)){
	    	count_positive = 0;
	    	count_negative = 0;
	    	result ++;
	    }
	}
	return result;
}