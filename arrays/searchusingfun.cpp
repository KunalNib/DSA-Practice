#include<iostream>
using namespace std;
int search(int arr[],int n,int x){
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x){
            return i;
        }
}   return -1;
    
}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter element you want to search";
    cin>>x;
    int result=search(arr,n,x);
    if(result==-1){
        cout<<"number is not present";
    }
    else{
        cout<<"number is present"<<" "<<result;
    }

    
    
}