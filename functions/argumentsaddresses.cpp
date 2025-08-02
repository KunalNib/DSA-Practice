#include<iostream>
using namespace std;
void fun(int x){
    cout<<&x;
}
int main(){
    int x=2;
    int y=4;
    cout<<&x<<endl;
    cout<<&y;
    fun(x);
}