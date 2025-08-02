#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        v.push_back(z);
    }
    int x;
    cout<<"enter the target";
    cin>>x;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){cout<<"("<<i<<","<<j<<")";
        }}
    }
}