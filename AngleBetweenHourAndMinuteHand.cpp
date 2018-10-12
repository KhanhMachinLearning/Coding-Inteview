#include <bits/stdc++.h>
using namespace std;
int Angle(float h,float m);
int main(){
	int t;
	cin>>t;
	while(t--){
		float h,m;
		cin>>h>>m;
        cout<<Angle(h,m)<<endl;
	}
	return 0;
}
int Angle(float h,float m){
	if((int)h == 12)
		h = 0;
	if((int)m == 60)
		m = 0;
	float angle_hour = 0.5*(h*60+m);
	float angle_minute = 6*m;
	float angle = fabs(angle_hour - angle_minute);
	return (int)min(360 - angle,angle);
}