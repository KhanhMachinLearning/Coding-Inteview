#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
		    switch(s[i]){
		       case 'a':
		       case 'b':
		       case 'c':
		           cout<<2<<"";
		           break;
		       case 'd':
		       case 'e':
		       case 'f':
		           cout<<3<<"";
		           break;
		       case 'g':
		       case 'h':
		       case 'i':
		           cout<<4<<"";
		           break;
		       case 'j':
		       case 'k':
		       case 'l':
		           cout<<5<<"";           
		           break;
		       case 'm':
		       case 'n':
		       case 'o':
		           cout<<6<<"";
		           break;
		       case 'p':
		       case 'q':
		       case 'r':
		       case 's':
		           cout<<7<<"";
		           break;
		       case 't':
		       case 'u':
		       case 'v':
		           cout<<8<<"";
		           break;
		       case 'w':
		       case 'x':
		       case 'y':
		       case 'z':
		           cout<<9<<"";
		           break;               
		    }
		}
		cout<<"\n";
	}
	return 0;
}