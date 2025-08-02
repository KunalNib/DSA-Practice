#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<=n-1;i++){
        sum+=arr[i];
        
    }
    cout<<sum<<endl;;
    float avg=(float)sum/n;
    cout<<avg;
}