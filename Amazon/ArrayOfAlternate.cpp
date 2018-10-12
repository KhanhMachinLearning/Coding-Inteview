#include <bits/stdc++.h>
using namespace std;
void Array_Alternate(int a[],int n);
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Array_Alternate(a,n);
    }
    return 0;
}
void Array_Alternate(int a[],int n){
    int temp[n];
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i] >= 0){
            temp[count] = a[i];
            count++;
        }
    }
    //
    int k=count;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            temp[k] = a[i];
            k++;
        }
    }
    //
    int i=0,j=count;
    while(i < count && j < n){
        cout<<temp[i]<<" "<<temp[j]<<" "; 
        i++;
        j++;
    }
    while(i < count){
        cout<<temp[i]<" "; 
        i++;
    }
    while(j < n){
        cout<<temp[j]<<" ";
        j++;
    }
    cout<<"\n";
}