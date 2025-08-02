#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    int n;
    cout<<"enter the size of the vector";
    cin>>n;
    vector<int> v;
    for(int i=0;i<=n-1;i++){
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<=n-1;i++){
    cout<<v[i]<<" ";
    }
}