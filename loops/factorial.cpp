#include<iostream>
using namespace std;
int main(){
    int n,fac=1;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
        fac*=n;
        n-=1;
    }
    cout<<fac;

}