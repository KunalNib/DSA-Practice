#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={0,1,4,5,8,9,10};
    int lo=0;
    int hi=v.size()-1;
    int ans;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(v[mid]==mid) lo=mid+1;
        else{ hi=mid-1;
         ans=mid;}
    }
    cout<<ans;
}