#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    vector<int> v;
    vector<int> z;
    cout<<"enter the size of vector";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    cout<<endl;
    int x=n-1;
    // for(int i=0;i<n;i++){
    //     z.push_back(v[x]);
    //     x--;
    // }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<z[i];
    }
}