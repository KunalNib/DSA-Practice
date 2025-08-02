#include<iostream>
using namespace std;
int main(){
    int n,fac=1,num;
    cout<<"enter the number";
    cin>>n;
    num=1;
    cout<<"0!=1"<<endl;
    while(n>0){
        fac*=n;
        cout<<num<<"!="<<fac<<endl;
        num+=1;
        n-=1;
        
    }
}