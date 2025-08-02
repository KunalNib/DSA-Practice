#include<iostream>
using namespace std;
int main(){
    int n,rem=0,sum=0;
    cout<<"enter the number";
    cin>>n;
    // while(n>0){
    //     rem=n%10;
    //     sum=sum+rem;
    //     n/=10;

    // }
    // cout<<sum;
    for(n;n>0;n/=10){
        rem=n%10;
        sum+=rem;
    }
    cout<<sum;
}