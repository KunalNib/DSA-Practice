#include<iostream>
using namespace std;
void greeting(int n){
    if(n==0) return;
    cout<<"good morning"<<endl;
    greeting(n-1);
}
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    greeting(n);
}