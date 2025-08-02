#include<iostream>
using namespace std;
//using a extra variable
// void print(int i,int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     print(i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     print(1,n);
// }

//through magic of recursion
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;
} 
int main(){
    int n;
    cin>>n;
    print(n);
}