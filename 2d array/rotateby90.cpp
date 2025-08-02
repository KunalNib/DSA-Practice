#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the sizes of the array";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j>i){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for( int j=0,k=m-1;j<=k;j++,k--){
            swap(arr[i][j],arr[i][k]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}