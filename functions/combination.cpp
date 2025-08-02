#include<iostream>
using namespace std;
int combination(int n,int r){
    int nfact=1;
    for(int i=2;i<=n;i++){
        nfact*=i;
    }
    int rfact=1;
    for(int i=2;i<=r;i++){
        rfact*=i;
    }
    int nrfact=1;
    for(int i=1;i<=n-r;i++){
        nrfact*=i;
    }
    return nfact/(rfact*nrfact);
}
int permuttaion(int n,int r){
    int nfact=1;
    for(int i=2;i<=n;i++){
        nfact*=i;
    }
    int rfact=1;
    for(int i=2;i<=r;i++){
        rfact*=i;
    }
    int nrfact=1;
    for(int i=1;i<=n-r;i++){
        nrfact*=i;
    }
    return nfact/nrfact;
}
int main(){
    int n,r;
    cout<<"enter n";
    cin>>n;
    cout<<"enter r";
    cin>>r;
    cout<<combination(n,r)<<endl;
    cout<<permuttaion(n,r);



 }