// #include<iostream>
// #include<vector>
// using namespace std;
// void rev(vector<int> &v,int a,int b){
//     // for(;a<=b;a++,b--){
//     //     int temp=v[b];
//     //     v[b]=v[a];
//     //     v[a]=temp;
//     // }
//     // return;
//     while(a<=b){
//         int temp=v[b];
//         v[b]=v[a];
//         v[a]=temp;
//         a++;
//         b--;
//     }
//     return;
// }
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i];
//     }
//     cout<<endl;
//     int a,b;
//     cout<<"enter the indices from which you want to reverse array";
//     cin>>a>>b;
//     rev(v,a,b);
//     for(int i=0;i<n;i++){
//         cout<<v[i];
//     }
    
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int> v;
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    int a,b;
    cout<<endl;
    cout<<"enter the indices between which you want to reverse";
    cin>>a>>b;
    for(;a<=b;a++,b--){
        int temp=v[a];
        v[a]=v[b];
        v[b]=temp;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}