#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the size of  matrix";
    cin>>n>>m;
    cout<<"enter the matrix element";
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
    cout<<endl;
    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=m-1;
    for(int i=0;i<n*m;){
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
            i++;
        }
        minr++;
        if(i==n*m) break;
        for(int j=minr;j<=maxr;j++){
            cout<<arr[j][maxc]<<" ";
            i++;
        }
        maxc--;
        if(i==n*m) break;
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
            i++;
        }
        maxr--;
        if(i==n*m) break;
        for(int j=maxr;j>=minr;j--){
            cout<<arr[j][minc]<<" ";
            i++;
        }
        minc++;
        if(i==n*m) break;
    }

}