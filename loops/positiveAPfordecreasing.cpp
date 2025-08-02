#include<iostream>
using namespace std;
int main(){
    int a,d;
    cout<<"enter the first term";
    cin>>a;
    cout<<"enter the difference";
    cin>>d;
    //suppose a=100,d=3,
    for(int i=1;a>0;i++){
        cout<<a<<endl;
        a+=d;
    }      
}