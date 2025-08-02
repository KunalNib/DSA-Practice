#include<iostream>
#include<vector>
using namespace std;
// void rotate(vector<int> &v,int k){
//     int a=0,b=v.size()-1-k;
//     for(;a<=b;a++,b--){
//         int temp=v[a];
//         v[a]=v[b];
//         v[b]=temp;
//     }
//     for(int i=(v.size()-k), j=(v.size()-1);i<=j;i++,j--){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//     }
//     for(int i=0,j=v.size()-1;i<=j;i++,j--){
//         int temp=v[j];
//         v[j]=v[i];
//         v[i]=temp;
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     cout<<"enter the elements of array";
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     int k;
//     cout<<endl;
//     cout<<"enter the terms through which you want to rotate  the array";
//     cin>>k;
//     rotate(v,k);

//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
    

// }
void rev_part(int a,int b,vector<int> &v){
    for(;a<=b;a++,b--){
        int temp=v[b];
        v[b]=v[a];
        v[a]=temp;
    }
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the elements of array";
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    int k;
    cout<<endl;
    cout<<"enter the terms through which you want to rotate  the array";
    cin>>k;
    if(k>n){
        k=k%n;//remainder reduces complete rounds
    }
    rev_part(0,n-k-1,v);
    rev_part(n-k,n-1,v);
    rev_part(0,n-1,v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    }