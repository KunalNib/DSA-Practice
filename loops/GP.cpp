#include<iostream>
using namespace std;
int main(){
    int n,a,r;
    cout<<"enter the number of terms";
    cin>>n;
    cout<<"enter the first term";
    cin>>a;
    cout<<"enter the ratio between two terms";
    cin>>r;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a*=r;
    }
}