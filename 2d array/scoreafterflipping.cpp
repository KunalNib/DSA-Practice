#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the rows and column";
    cin>>n>>m;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> a(i+1);
        v.push_back(a);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(v[i][0]==0){
            for(int j=0;j<m;j++){
                if(v[i][j]==0){
                    v[i][j]=1;
                }
                else{
                    v[i][j]=0;
                }
            }
        }
    }
    for(int j=0;j<m;j++){
        int noz=0;
            int noo=0;
        for(int i=0;i<n;i++){
            if(v[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){
            for(int i=0;i<n;i++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
            
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=m-1;j>=0;j--){
            sum+=x*v[i][j];
            x*=2;
        }
    }
    cout<<sum;
}