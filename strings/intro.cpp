#include<iostream>
using namespace std;
int main(){
    // char str[]={'a','b','c','d'};
    char str[5]="abcd";
    for(int i=0;i<4;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    for(int i=0;str[i]!=0;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str;
}