#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int size;
    cout<<"enter size of vector";
    cin>>size;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int n;
    cout<<"enter n";
    cin>>n;
    int idx=-1;
    for(int i=(v.size())-1;i>0;i--){
        if(v[i]==n){
           idx=i;
           break;
        }
    }
    if(idx==-1){
        cout<<"element not found";
    }
    else{
        cout<<"element is at index : "<<idx;
    }
}