#include<iostream>
using namespace std;
int main(){
    // int x=6;
    // int*ptr=&x;
    // cout<<*ptr<<endl;
    // ptr++;
    // cout<<*ptr;;
    int x=6;
    int*ptr=&x;
    (*ptr)++;
    cout<<x;
}