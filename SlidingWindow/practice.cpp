#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> trips={{2,1,5},{3,5,7}};
    int capacity=5;
    int n=trips.size();
        int m=0;
        for(int i=0;i<n;i++){
            m=max(m,trips[i][2]);
        }
        vector<int> v(m+1,0);
        for(int i=0;i<n;i++){
            v[trips[i][1]]+=trips[i][0];
            if(trips[i][2]<m)v[trips[i][2]]-=trips[i][0];
        }
        for(int i=0;i<m;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        for(int i=1;i<=m;i++){
            v[i]=v[i]+v[i-1];
        }
        for(int i=0;i<m;i++){
            cout<<v[i]<<" ";
        }
}