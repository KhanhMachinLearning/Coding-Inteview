#include <bits/stdc++.h>
using namespace std;
int compare(const void *a,const void *b);
void Uncommon_Character(string s1,string s2);
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1;
		cin.ignore();
		cin>>s2;
		Uncommon_Character(s1,s2);
	}
	return 0;
}
int compare(const void *a,const void *b){
	return (*(char *)a - *(char *)b);
}
void Uncommon_Character(string s1,string s2){
	string s3;
	int count1[256] = {0};
	int count2[256] = {0};
    for(int i=0;i<s1.length();i++)
    	count1[s1[i]]++;
    for(int j=0;j<s2.length();j++)
    	count2[s2[j]]++;
    for(int i=0;i<s1.length();i++){
    	if((count2[s1[i]] == 0) && (count1[s1[i]]!=0)){
    		s3.push_back(s1[i]);
    		count1[s1[i]] = 0;
    	}
    }
    for(int j=0;j<s2.length();j++){
    	if((count1[s2[j]] == 0) && (count2[s2[j]]!=0)){
    		s3.push_back(s2[j]);
    		count2[s2[j]] = 0;
    	}
    }
    char a[s3.length()];
    for(int i=0;i<s3.length();i++)
    	a[i] = s3[i];
    qsort(a,s3.length(),sizeof(a[0]),compare);
    for(int i=0;i<s3.length();i++)
    	cout<<a[i]<<"";
    cout<<"\n";
}