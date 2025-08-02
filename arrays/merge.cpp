#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &v1,vector<int> &v2,vector<int> & full){
    int i=0,j=0,k=0;
    int n1=v1.size();
    int n2=v2.size();
    while(i<n1 && j<n2){
        if(v1[i]<v2[j]){
            full[k++]=v1[i++];
        }
        else{
            full[k++]=v2[j++];
        }
    }
    if(i==n1){
        while(j<n2){
            full[k++]=v2[j++];
        }
    }
    if(j==n2){
        while(i<n1){
            full[k++]=v1[i++];
        }
    }
}
int main(){
    int n1;
    cout<<"enter 1st sorted array you want  to merge";
    cin>>n1;
    vector<int> v1;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    int n2;
    cout<<"enter 2nd sorted array";
    cin>>n2;
    vector<int> v2;
    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    vector<int> full(n1+n2);
    merge(v1,v2,full);
    for(int i=0;i<full.size();i++){
        cout<<full[i];
    }

}