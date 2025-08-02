#include<iostream>
using namespace std;
int main(){
    int arr[]={3,1,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int count=0;
    while(i<n){
        if(count>=n){ cout<<arr[i];
        break;}
        int ci=arr[i]-1;
        if(i==ci) i++;
        else {swap(arr[i],arr[ci]);
        count++;}
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}