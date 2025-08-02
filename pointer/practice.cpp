// #include<iostream>
// using namespace std;
// void swap(int* x,int* y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
//     return;
// }
// int main(){
//     int a=3;
//     int b=4;
//     cout<<"a="<<a<<"b"<<b<<endl;
//     swap(&a,&b);
//     cout<<"a="<<a<<"b="<<b<<endl;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i,b=j;
            if(a>n){
                a=2*n-i;
            }
            if(b>n){
                b=2*n-j;
            }
            int z=min(a,b);
            cout<<n-z+1;
        }
        cout<<endl;
    }
}