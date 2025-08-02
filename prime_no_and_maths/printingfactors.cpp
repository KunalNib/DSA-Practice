#include<iostream>
#include<cmath>
using namespace std;
void printfactors(int n){
    // for(int i=1;i<=n;i++){
    //     if(n%i==0) cout<<i<<" ";
    // }
    //can we do it in root n TC-->Yes
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){ cout<<i<<" ";
    }
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0){ cout<<n/i<<" ";
    }
}
}
int main(){
    int n;
    cin>>n;
    printfactors(n);
}