#include<iostream>
using namespace std;
int triangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    triangle(n);
}