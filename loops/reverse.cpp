#include<iostream>
using namespace std;
int main(){
    int n,rem=0,rev=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
        rem=n%10;
        rev*=10;
        rev+=rem;
        
        n/=10;
    }
    cout<<rev;
}