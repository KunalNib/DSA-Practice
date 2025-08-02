#include<iostream>
using namespace std;
int main (){
    // int n,a=0,b=1,fibo=1,i=2;
    // cout<<"enter the number";
    // cin>>n;
    // if(n==1){
    //     cout<<"0";
    // }
    // else if(n==2){
    //     cout<<"0 1";
    // }
    // else{
    //     cout<<"0 1 ";
    //     while(n>i){
    //     fibo=a+b;
    //     a=b;
    //     b=fibo;
        
    //     cout<<fibo<<" ";
    //     i+=1;
    //     }
    int n,a=0,b=1,fibo=0;
    cout<<"enter the nummber";
    cin>>n;
    if(n==1){
        cout<<"0";
        
    }
    else if(n==2){
        cout<<"0 1";
    }
    else{
        cout<<"0 1";
        for(int i=2;i<n;i++){
            fibo=a+b;
            a=b;
            b=fibo;
            cout<<" "<<fibo<<" ";
        }
    }
}
