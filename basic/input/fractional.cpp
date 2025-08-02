#include<iostream>
using namespace std;
int main (){
    cout<<"enter the no :":
    float x;
    cin>>x;
    int y=(int)x;
    if (y<0) y=y-1;
    float z = (float)x-y;
    cout<<z;
}