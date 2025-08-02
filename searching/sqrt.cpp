#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<n;i++){
//         if(i*i==n){ cout<<i;
//         break;}

//         else if(i*i>n){
//             cout<<"there is no integer square root";
//             break;
//         }
//     }
// }
int main(){
    int n;
    cout<<"enter the no. :";
    cin>>n;
    int lo=0;
    int hi=n;
    bool flag=false;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(mid*mid==n){ cout<<mid;
        flag=true;
        break;}
        else if(mid*mid<n) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<hi;

}