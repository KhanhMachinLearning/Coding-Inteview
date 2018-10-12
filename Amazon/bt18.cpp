#include <bits/stdc++.h>
using namespace std;
int check_square(int a1,int a2,int b1,int b2,int c1,int c2,int d1,int d2);
float distance(int a1,int a2,int b1,int b2);
bool compare(float a,float b);
float Min(float a,float b,float c,float d);
int main(){
	int t;
	cin>>t;
	while(t--){
		int a1,a2,b1,b2,c1,c2,d1,d2;
		cin>>a1>>a2>>b1>>b2>>c1>>c2>>d1>>d2;
        cout<<check_square(a1,a2,b1,b2,c1,c2,d1,d2)<<endl;
	} 
	return 0;
}
float distance(int a1,int a2,int b1,int b2){
    return (float)(sqrt(pow(a1-b1,2) + pow(a2-b2,2)));
}
bool compare(float a,float b){
     return (fabs(a-b) < 0.005f);
}
float Min(float a,float b,float c,float d){
	float t = a>b?b:a;
	t = t>c?c:t;
	t = t>d?d:t;
	return t;
}
int check_square(int a1,int a2,int b1,int b2,int c1,int c2,int d1,int d2){
	int count=0;
	float min = Min(distance(a1,a2,b1,b2),distance(b1,b2,c1,c2),distance(d1,d2,a1,a2),distance(c1,c2,d1,d2));
    if(compare(distance(a1,a2,b1,b2),min))
    	count++;
    if(compare(distance(b1,b2,c1,c2),min))
    	count++;
    if(compare(distance(c1,c2,d1,d2),min))
    	count++;
    if(compare(distance(d1,d2,a1,a2),min))
    	count++;
    if(compare(distance(c1,c2,a1,a2),min))
    	count++;
    if(compare(distance(d1,d2,b1,b2),min))
    	count++;	
    if(count == 4)
      return 1;	
    else
      return 0;
}
