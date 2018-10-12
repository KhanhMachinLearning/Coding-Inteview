#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b,c;
		std::vector<string> v;
		std::map<string, float> m;
		cin>>n;
		string name;
		cin>>name>>a>>b>>c;
		float average = (a+b+c)/3;
        v.push_back(name);
        for(int i=1;i<n;i++){
        	int a,b,c;
        	string name;
        	cin>>name>>a>>b>>c;
        	float average1 = (a+b+c)/3;
        	if(average1 > average){
        		v.clear();
                average = average1;
                v.push_back(name);
        	}
        	else if(average1 == average){
                v.push_back(name);
        	}
        }
        //
        for(int i=0;i<v.size();i++)
        	cout<<v[i]<<" ";
        cout<<(int)average<<"\n";
	}
	return 0;
}