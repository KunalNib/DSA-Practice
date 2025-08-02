#include<iostream>
using namespace std;
// int pasc(int n,int r){
//     int nfact=1;
//     for(int i=2;i<=n;i++){
//         nfact*=i;
//     }
//     int rfact=1;
//     for(int i=2;i<=r;i++){
//         rfact*=i;
//     }
//     int nrfact=1;
//     for(int i=2;i<=n-r;i++){
//         nrfact*=i;
//     }
//     return nfact/(rfact*nrfact);
// }
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int pasc(int n,int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<pasc(i,j);
        }
        cout<<endl;
    }
}