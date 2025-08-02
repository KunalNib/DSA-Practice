#include<iostream>
using namespace std;
int main(){
    int n,a,d;
    cout<<"enter the first term";
    cin>>a;
    cout<<"enter the difference";
    cin>>d;
    cout<<"enter the no. of terms: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a+=d;
    }
}