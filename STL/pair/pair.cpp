#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // pair<int,pair<int,int>> p={1,{1,5}};
    // cout<<p.first<<" ";
    // cout<<p.second.first<<" ";


    //vector of pairs

    vector<pair<int,int>> vec={{1,0},{2,-1},{3,6},{4,5}};
    vec.push_back({11,111});//insert
    vec.emplace_back(10,100);//in-place obejct creation
    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<" "<<endl;
    }
    sort(vec.begin(), vec.end()); // sorts by first, then second
    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<" "<<endl;
    }

    
    return 0;

}