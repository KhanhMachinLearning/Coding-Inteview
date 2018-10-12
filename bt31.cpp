#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
        int m = n/1000;
        int c = (n-m*1000)/100;
        int x = (n-m*1000-c*100)/10;
        int r = n%10;
        //
        switch(m){
        	case 1:
        	  s.push_back('M');
        	  break;
        	case 2:
        	  s.push_back('M');
        	  s.push_back('M');
        	  break;
        	case 3:
        	  s.push_back('M');
        	  s.push_back('M');
        	  s.push_back('M');
        	  break;
        }
        //
        switch(c){
        	case 1:
               s.push_back('C');
               break;
            case 2:
               s.push_back('C');
               s.push_back('C');
               break;  
            case 3:
               s.push_back('C');
               s.push_back('C');
               s.push_back('C');
               break;
            case 4:
               s.push_back('C');
               s.push_back('D');
               break;
            case 5:
               s.push_back('D');
               break;
            case 6:
               s.push_back('D');
               s.push_back('C');
               break;
            case 7:
               s.push_back('D');
               s.push_back('C');
               s.push_back('C');
               break;
            case 8:
               s.push_back('D');
               s.push_back('C');
               s.push_back('C');
               s.push_back('C');
               break;
            case 9:
               s.push_back('C');
               s.push_back('M'); 
               break;
        }
        //
        switch(x){
        	case 1:
               s.push_back('X');
               break;
            case 2:
               s.push_back('X');
               s.push_back('X');
               break;  
            case 3:
               s.push_back('X');
               s.push_back('X');
               s.push_back('X');
               break;
            case 4:
               s.push_back('X');
               s.push_back('L');
               break;
            case 5:
               s.push_back('L');
               break;
            case 6:
               s.push_back('L');
               s.push_back('X');
               break;
            case 7:
               s.push_back('L');
               s.push_back('X');
               s.push_back('X');
               break;
            case 8:
               s.push_back('L');
               s.push_back('X');
               s.push_back('X');
               s.push_back('X');
               break;
            case 9:
               s.push_back('X');
               s.push_back('C'); 
               break;
        }
        //
         switch(r){
            case 1:
              s.push_back('I');
               break;
            case 2:
               s.push_back('I');
               s.push_back('I');
               break;  
            case 3:
               s.push_back('I');
               s.push_back('I');
               s.push_back('I');
               break;
            case 4:
               s.push_back('I');
               s.push_back('V');
               break;
            case 5:
               s.push_back('V');
               break;
            case 6:
               s.push_back('V');
               s.push_back('I');
               break;
            case 7:
               s.push_back('V');
               s.push_back('I');
               s.push_back('I');
               break;
            case 8:
               s.push_back('V');
               s.push_back('I');
               s.push_back('I');
               s.push_back('I');
               break;
            case 9:
               s.push_back('I');
               s.push_back('X'); 
               break;
           }
        cout<<s<<endl;    
	}
	return 0;
}