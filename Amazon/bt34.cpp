#include <bits/stdc++.h>
using namespace std;
bool rotate_anti_clockwise(string a,string b);
bool rotate_clockwise(string a,string b);
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a;
		cin.ignore();
        cin>>b;
        if((a.length() != b.length()))
        	cout<<0<<endl;
        else{
            if(rotate_anti_clockwise(a,b) || rotate_clockwise(a,b))
            	cout<<1<<endl;
            else
            	cout<<0<<endl;
        }
	}
	return 0;
}
bool rotate_clockwise(string a,string b){
	int n = a.length();
    for(int i=0;i < n;i++){
    	if(a[i] != b[(n+2+i)%n]){
    		return false;
    	}
    }
    return true;
}
bool rotate_anti_clockwise(string a,string b){
	int n = a.length();
	for(int i=0;i < n;i++){
		if(a[i] != b[(n-2+i)%n]){
			return false;
		}
	}
	return true;
}