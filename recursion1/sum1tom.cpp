#include<iostream>
using namespace std;
// using parameter
// void sum(int i,int n){
//     if(n==0) {
//         cout<<i;
//         return;}
//     sum(i+n,n-1);
// }
// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     sum(0,n);
// }
int sum(int n){
    if(n==1) return 1 ;
    return n+sum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}