#include<iostream>
using namespace std;
void display(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={5,6,78,23,13};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
}