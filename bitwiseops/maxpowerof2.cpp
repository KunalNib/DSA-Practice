#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int temp;
    // while(n>0){
    //     temp=n;
    //     n=n&n-1;
    // }
    // cout<<temp;
    // cout<<temp;
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    cout<<(n+1)/2;
}