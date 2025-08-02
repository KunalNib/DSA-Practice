#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter row and columns respectively";
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter first array";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int brr[n][m];
    cout<<"enter second array";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>brr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                cout<<brr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                cout<<arr[i][j]+brr[i][j]<<" ";
            
        }
        cout<<endl;
    }
}