#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter row and columns respectively";
    cin>>n>>m;
    int arr[n][m];;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int largest=arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]>largest){
                largest=arr[i][j];
            }
        }
    }
    cout<<largest;
}