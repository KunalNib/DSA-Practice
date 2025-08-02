#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,4,-7,-1,4,2,6};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n-k+1];
    // for(int i=0;i<n-k+1;i++){
    //     for(int j=i;j<i+k;j++){
    //         if(arr[j]<0){
    //             ans[i]=arr[j];
    //             break;
    //         }
    //         else ans[j]=0;
    //     }
    // }
    // for(int i=0;i<n-k+1;i++){
    //     cout<<ans[i]<<" ";
    // }
    int p=-1;
    ans[0]=0;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            p=i;
            ans[0]=arr[p];
            break;
        }
    }
    for(int i=1;i<n-k+1;i++){
        if(p>=i)ans[i]=arr[p];
        else{
            int flag=true;
            for(int j=i;j<i+k;j++){
                if(arr[j]<0){
                    p=j;
                    flag=false;
                    break;
                }
            }
            if(flag==false)ans[i]=arr[p];
            else ans[i]=0;
        }
    }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }
    
}