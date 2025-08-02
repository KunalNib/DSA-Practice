#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the base";
    cin>>a;
    cout<<"enter the power";
    cin>>b;
    // if(b>0){
    //     for(int i=1;i<=b;i++){
    //         mul=mul*a;

    //     }
    //     cout<<mul;
    // }
    bool flag=true;
    float mul=1;
    if(b<0){
        flag=false;
        b=-b;
    }
    for(int i=1;i<=b;i++){
        mul*=a;
    }
    if(flag==false){
        mul=1/mul;
    }
    if(a==0 && b==0){
        cout<<"not defined";
        
    }
    else{
        cout<<mul;
    }

}