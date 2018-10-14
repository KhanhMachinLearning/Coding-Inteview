//use g++ -std=c++11 DayOfprogrammer.cpp -o DayOfProgrammer
#include <bits/stdc++.h>
using namespace std;
string Day_Of_Programmer(int y);
int main(){
	int t;
	cin>>t;
	while(t--){
		int y;
        cin>>y;
        cout<<Day_Of_Programmer(y)<<endl;
	}
	return 0;
}
string Day_Of_Programmer(int y){
	string result = to_string(y);
	if(y >= 1700 && y <= 1917){
         if(y %4 == 0){
         	return "12.09."+result;
         }
         else{
         	return "13.09."+result;
         }
	}
	else if(y == 1918){
         return "26.09"+result;
	}
	else if(y >= 1919 && y <= 2700){
         if((y %400 == 0) || (y %4 == 0 && y % 100 != 0)){
         	  return "12.09."+result;
         }
         else{
         	return "13.09."+result;
         }
	}
}