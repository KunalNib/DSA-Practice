#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// void printmax(vector<int> v,int n,int max){
//     if(n==v.size()) cout<<max;
//     if(v[n]>max) max=v[n];
//     printmax(v,n+1,max);
// }
// int main(){
//     vector<int> v={5,4,1,3,6,8,2};
//     printmax(v,0,0);
// }
int maxinarr(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxinarr(arr,n,idx+1));
}
int main(){
    int arr[]={2,1,9,3,6,5,200,298,220,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxinarr(arr,n,0);
}