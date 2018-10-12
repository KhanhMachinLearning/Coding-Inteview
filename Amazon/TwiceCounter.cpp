#include <bits/stdc++.h>
using namespace std;
int Twice_Counter(string s[],int n);
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int result = 0;
	    cin>>n;
	    std::vector<string> v;
	    std::map<string, int> m;
	    for(int i=0;i<n;i++){
	    	string s;
	    	cin>>s;
            v.push_back(s);
	    }
        //
        for(int i=0;i<n;i++)
        	m[v[i]]++;
        //
        std::map<string, int> ::iterator it;
        for(it = m.begin();it!=m.end();it++){
        	if((it->second) == 2){
        		result ++;
        	}
        }
        cout<<result<<endl;
	}
	return 0;
}
int Twice_Counters(string s[],int n){

}