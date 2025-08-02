#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     if(i%2==0)sum-=i;
    //     else sum+=i;
    // }
    // cout<<sum;
    //inefficient
    if(n%2==0){
        sum=-n/2;

    }
    else{
        sum=(n/2)+1;
    }
    cout<<sum;
}