#include<iostream>
using namespace std;
int reverse(int n,int x){
    if(n==0) return x/10;
    x+=n%10;
    reverse(n/10,x*10);

}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n,0);
}