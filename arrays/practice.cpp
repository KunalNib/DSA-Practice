#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter array";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> arr(n);
    int key=-1;
    for(int i=0;i<n;i++){
        arr[i]=key;
        if(v[i]>key){
            key=v[i];
        }
    }
    key=-1;
    vector<int> brr(n);
    for(int i=v.size()-1;i>=0;i--){
        brr[i]=key;
        if(v[i]>key){
            key=v[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<brr[i];
    }
    vector<int> mini(n);
    for(int i=0;i<n;i++){
        if(brr[i]>arr[i]){
            mini[i]=arr[i];
        }
        else{
            mini[i]=brr[i];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<mini[i];
    }
    int x=0;
    for(int i=0;i<n;i++){
        if(mini[i]-v[i]>0){
            x+=mini[i]-v[i];
        }
    }
    cout<<endl;
    cout<<x;
}