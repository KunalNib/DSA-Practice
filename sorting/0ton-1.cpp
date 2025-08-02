#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> visited(n,0);
    for(int i=0;i<n;i++){
        int m=INT_MAX;
        int idx;
        for(int j=0;j<n;j++){
            if(v[j]<m && visited[j]==0){
                m=v[j];
                idx=j;
            }
        }
        visited[idx]=1;
        v[idx]=i;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}