#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,85,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxsum=INT_MIN;
    int maxidx=-1;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
        maxidx=0;
    }
    maxsum=sum;
    int j=k;
    int i=1;
    while(j<n){//for(int i=1;i<=n-k;i++)
        sum=sum+arr[j]-arr[i-1];
        if(maxsum<sum){
            maxsum=sum;
            maxidx=i;
        }
        i++;
        j++;
    }
    cout<<maxsum<<endl;
    for(int i=maxidx;i<(k+maxidx);i++){
        cout<<arr[i]<<" ";
    }
}