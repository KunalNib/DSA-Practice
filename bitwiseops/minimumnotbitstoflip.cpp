#include<iostream>
using namespace std;
int main(){
    int x=20;
    int y=27;
    int count=__builtin_popcount(x^y);
    cout<<count;
}