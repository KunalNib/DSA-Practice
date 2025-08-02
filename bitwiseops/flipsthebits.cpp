#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=n;
    int temp=0;
    while(x>0){
        temp=x;
        x=x&(x-1);
    }
    cout<<temp<<endl;
    temp=temp*2;
    temp-=1;
    n=(n^temp);
    cout<<n;
    }