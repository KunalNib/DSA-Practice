#include<iostream>
using namespace  std;
int main(){
    int a,b;
    char x;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"enter the operator";
    cin>>x;
    switch(x){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
    }
    return 0;
}