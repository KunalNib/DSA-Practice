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
    int idx=-1;
    for(int i=v.size()-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
    int x=-1;
    if(idx!=-1){
        for(int i=idx+1,j=v.size()-1;i<=j;i++,j--){
            swap(v[i],v[j]);
        }
        for(int i=idx+1;i<n;i++){
            if(v[idx]<v[i]){
                x=i;
                break;
            }
        }
        swap(v[idx],v[x]);

    }
    if(idx==-1){
        int i=0;
        int j=v.size()-1;
        while(i<=j){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}