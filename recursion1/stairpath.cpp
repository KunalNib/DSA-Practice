#include<iostream>
using namespace std;
int stair(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return stair(n-1)+stair(n-2);
    
    // if(n==1|| n==0) return 1;
    // return stair(n-1)+stair(n-2)+stair(n-3);
}
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    cout<<stair(n);
}