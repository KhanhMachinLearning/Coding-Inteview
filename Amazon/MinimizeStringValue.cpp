#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(string s,int k);
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;D
		cin>>s;
		cin.ignore();
		cin>>k;
		cout<<solution(s,k)<<endl;
	}
	return 0;
}
ll solution(string s,int k){
	int count[256];
    ll sum = 0;
	memset(count,0,sizeof(count));
	for(int i=0;i<s.length();i++)
		count[s[i]]++;
    for(int i=1;i<=k;i++){
    	sort(count,count+256);
    	count[255] -= 1;
    }
    //
    for(int j=255;j>=0 && count[j]>=0;j--)
    	sum += (ll)pow(count[j],2);
    return sum;
}