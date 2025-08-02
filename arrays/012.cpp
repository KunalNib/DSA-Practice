#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    vector<int> v;
    int noz=0,noo=0; 
    int no2=0;
    cout<<"enter array elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else if(v[i]==1)noo++;
        else no2++;
    }
    cout<<noz<<endl;
    for(int i=0;i<n;i++ ){
        if(i<noz)v[i]=0;
        else if(i>noz-1 && i<n-no2) v[i]=1;
        else v[i]=2;
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
}