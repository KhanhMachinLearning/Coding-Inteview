#include <bits/stdc++.h>
using namespace std;
void Permutation(char a[]);
int compare(const void *a,const void *b);
int find_second_character(char a[],int first,int last);
void Reverse(char a[],int l,int r);
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		char a[s.length()];
		for(int i=0;i<s.length();i++)
			a[i] = s[i];
		Permutation(a);
	}
	return 0;
}
int compare(const void *a,const void *b){
	return (*(char *)a - *(char *)b);
}
int find_second_character(char a[],int first,int last){
	int index = first+1;
	for(int i=first+1;i<=last;i++){
		if((a[i]>a[first]) && (a[i] <= a[index])){
			index = i;
		}
	}
	return index;
}
void Reverse(char a[],int l,int r){
	for(int i=l,j=r;i<j;i++,j--)
		swap(a[i],a[j]);
}
void Permutation(char a[]){
	bool stop = false;
	qsort(a,strlen(a),sizeof(char),compare);
	for(int i=0;i<strlen(a);i++)
		cout<<a[i]<<"";
	cout<<" ";
	while(!stop){
		int j = strlen(a)-2;
		while(a[j]>=a[j+1])
			 j--;
		if(j == -1){
			cout<<"\n";
			stop = true;
		}	
		else{
			int index = find_second_character(a,j,strlen(a)-1);
			swap(a[j],a[index]);
            Reverse(a,j+1,strlen(a)-1);
            for(int i=0;i<strlen(a);i++)
		       cout<<a[i]<<"";
	        cout<<" ";
		}
	}
}