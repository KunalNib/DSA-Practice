#include<iostream>
using namespace std;
void swap(int x,int y){
    int z;
    z=x;
    x=y;
    y=z;
    cout<<"x="<<x<<"y="<<y;
    
}
int main(){
    int x;
    int y;
    cin>>x>>y;
    swap(x,y);
}