#include<iostream>
using namespace std;
int main(){
    int *ptr=NULL;//'\0' or 0
    cout<<ptr;
    int n=4;
    int *p1=&n;
    int **p2=&p1;//double pointer
    cout<<**p2<<*p1<<n;
    cout<<endl<<*p2;
}