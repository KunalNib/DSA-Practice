#include<iostream>
using namespace std;
int main(){
    int arr[]={1,245,345,78,9};
    int *ptr=arr;
    int *p=&arr[0];
    cout<<ptr[0];
    // for(int i=0;i<=4;i++){
    //     cout<<ptr[i]<<" ";
    // }
    for(int i=1;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;/*after last loop the pointer will point to some 
        random address so we will have to redefine its path*/
    }
    int *ptr=arr;
    cout<<endl;
    cout<<ptr[0]<<endl;
    *ptr=8;//ptr[0=8]
    cout<<ptr[0];
}