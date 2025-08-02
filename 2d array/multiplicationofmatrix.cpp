#include<iostream>
using namespace std;
int main(){
    int n,m,p,q;
    cout<<"enter the size of  rows for first matrix :";
    cin>>n;
    cout<<endl;
    cout<<"enter the size of columns for first matrix :";
    cin>>m;
    
    cout<<endl;
    cout<<"enter the size of  rows for second matrix :";
    cin>>p;
    cout<<endl;
    cout<<"enter the size of columns for second matrix :";
    cin>>q;
    
    
    if(m==p){ 
        cout<<"enter the first matrix";
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"enter the second matrix";
        int b[p][q];
        cout<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        int res[n][q];
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"the matrices can't be multiplied";
    }
}