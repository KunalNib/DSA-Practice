#include<iostream>
using namespace std;
int main(){
    int a;
    int *ptr=&a;
    cout<<"enter any number";
    cin>>*ptr;
    cout<<a;

}