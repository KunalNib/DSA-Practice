#include<iostream>
using namespace std;
int main(){
    int n=2,m=5;
    int *p1=&n,*p2=&m;
    cout<<*p1<<endl<<*p2;
}