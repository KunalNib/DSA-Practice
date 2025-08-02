#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter array elements";
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        }
    for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int j=i+1;
        while(j>0){
            if(v[j]<v[j-1]){
                swap(v[j],v[j-1]);
                
                }
                j--;
            if(v[j]>v[j-1]){
                break;
            }
            }
        }
    for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
}