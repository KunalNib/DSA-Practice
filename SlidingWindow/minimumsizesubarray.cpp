#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={117,2,4,6,3,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=35;
    int i=1;
    int j=0;
    int sum=0;
    int len=0;
    int minlen=INT_MAX;
    sum=arr[0];
    if(sum>=target){ cout<<1;}
    else{
    while(i<n){
        sum+=arr[i];
        while(sum>=target){
            len=i-j+1;
            minlen=min(len,minlen);
            sum-=arr[j];
            j++;
        }
        i++;
    }}
    if(len==0) cout<<0;
    else cout<<minlen;
}