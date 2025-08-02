#include<iostream>
using namespace std;
// int factorial(int a,int fact){
//     if (a==0) return 1;
//     if (a==1) return fact;
//     fact=fact*a;
//     factorial(a-1,fact);
    
// }
int fact(int n){
    if (n==0) return 1;
    if (n==1) return n; 
    return n*fact(n-1);
}
int main(){
    // int a=5;
    // int fact=1;
    // cout<<factorial(a,fact);
    cout<<fact(0);

}