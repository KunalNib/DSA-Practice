#include<iostream>
using namespace std;
void gcd(int a,int b){
    if(b%a==0) {cout<<a;
    return;}
    gcd(b%a,a);
    
}
int main(){
    int a,b;
    cout<<"enter the numbers";
    cin>>a>>b;
    gcd(a,b);
}