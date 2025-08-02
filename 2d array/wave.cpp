#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter row and column";
    cin>>n>>m;
    cout<<"enter the matrix elements";
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<;
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<m;j++){
            int k=m-1-j;
            if(i%2==0){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<arr[i][k]<<" ";
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int k=m-1-j;
            if(i%2==0){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<arr[i][k]<<" ";
            }
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int k=m-1-j;
            if(i%2==0){
                cout<<arr[j][i]<<" ";
            }
            else{
                cout<<arr[k][i]<<" ";
            }
        }
    }
}