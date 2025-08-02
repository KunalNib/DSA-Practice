#include<iostream>
using namespace std;
int main(){
    // int n,digit=0;
    // cout<<"enter the num";
    // cin>>n;
    // for(int i=n;i>0;i/=10){
    //     digit+=1;
    // }
    // cout<<digit;
    int n,digit=0;
    cout<<"enter the num";
    cin>>n;
    while(n>0){
        digit+=1;
        n/=10;
    }
    cout<<digit;
}