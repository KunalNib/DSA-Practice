#include<iostream>
#include<vector>
using namespace std;
void subarr(vector<int>& v,vector<int> u,int idx){
    if(idx==v.size()){
        for(int i=0;i<u.size();i++){
            cout<<u[i];
        }
        cout<<endl;
        return;
    }
    subarr(v,u,idx+1);
    if(u.size()==0 ||v[idx-1]==u[u.size()-1]){
    
    u.push_back(v[idx]);
    subarr(v,u,idx+1);
    }
    


}
int main(){
    // int arr[]={1,2,3,4,5,6};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<arr[k];
    //         }
    //         cout<<endl;
    //     }
    // }
    vector<int> v={1,2,3,4};
    vector<int> u;
    subarr(v,u,0);
}