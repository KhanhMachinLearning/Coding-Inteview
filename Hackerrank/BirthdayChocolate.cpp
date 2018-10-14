#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	std::vector<int> s(n);
	for(int i=0;i<n;i++){
          int c;
          cin>>c;
          s.push_back(c);
    }
	int d,m;
	cin>>d>>m;
	//
	int count=0;
	for(int i=0;i<s.size();i++){
		 int sum = 0;
		 if(i < s.size()+1-m){
		 	for(int j=i;j <= i+m-1;j++){
                 sum += s[j];
		 	}
		 }
		 if(sum == d){
		 	count++;
		 }
	}
	cout<<count<<"\n";
	return 0;
}