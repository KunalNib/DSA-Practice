#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp=*y;
    *y=*x;
    *x=temp;
    return;
}
int main(){
    int n=6,m=8;
    int *p1=&n;
    int *p2=&m;
    cout<<"n="<<n<<" m="<<m<<endl;
    swap(p1,p2);
    cout<<"n="<<n<<" m="<<m;
    return 0;
}