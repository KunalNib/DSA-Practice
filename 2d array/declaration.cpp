#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter row and columns respectively";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){// i si the row number
        for(int j=0;j<m;j++){// j is the column number
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}