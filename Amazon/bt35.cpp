#include <bits/stdc++.h>
using namespace std;
int prime_factorization(int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
        cout<<prime_factorization(n)<<endl;
	}
	return 0;
}
int prime_factorization(int n){
	if(n == 1)
		return 1;
	else if(n==2)
		return 0;
	else if(n==3)
		return 0;
    else{
	   int count[(int)sqrt(n)+1];
	   int n1=n;
	   memset(count,0,sizeof(count));
	   while(n%2 == 0){
          count[2]++;
		  n /= 2;
	    }
	//
       for(int i=3;i<=(int)sqrt(n);i += 2){
   	      while(n%i == 0){
            count[i]++; 
   	    	n /= i;
   	      } 
   }
   //
        int max,min;
        int i=0;
        while(!count[i])
   	        i++;
        max = count[i];
        min = count[i];
        for(int j=i+1;j<=(int)sqrt(n1);j++){
   	        if(count[j]){
   	   	       max = max > count[j] ? max : count[j];
   	   	       min = min > count[j] ? count[j] : min; 
            }
         }   
   //
      if(n > 2)
   	     return 0;
      else{
   	     if(min == max)
   	  	   return 1;
   	     else
   	 	   return 0;
        }
  }
}