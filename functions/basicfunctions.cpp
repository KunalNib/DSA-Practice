#include<iostream>
using namespace std;
int even_odd(int n){
    if(n%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    even_odd(n);

}