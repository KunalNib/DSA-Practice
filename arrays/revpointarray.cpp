#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    cout<<endl;
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp=v[j];
        v[j]=v[i];
        v[i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    
}