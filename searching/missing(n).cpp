#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9,12};//array starts from 0
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1; 
    for(int i=0;i<n;i++){
        if(i!=arr[i]){ cout<<i;
        break;}
    //    if(arr[i]+1!=arr[i+1]){
    //     cout<<arr[i]+1;
    //     break;
    //    }   
    }}