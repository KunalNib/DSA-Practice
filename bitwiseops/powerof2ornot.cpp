#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        n=n&(n-1);
        count++;
    }
    if(count==1){
        cout<<"It is the power of 2";
    }
    else cout<<"It is not a power of 2";
}