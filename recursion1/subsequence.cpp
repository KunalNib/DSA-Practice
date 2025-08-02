#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int>& nums,vector<int> ans,vector<vector<int>>& v,int idx,int k){
    if(idx==nums.size()){
        if(ans.size()==k){
            v.push_back(ans);
        }
        return;
    }
    if(nums.size()+ans.size()<k){
        return;
    }
    subset(nums,ans,v,idx+1,k);
    ans.push_back(nums[idx]);
    subset(nums,ans,v,idx+1,k);

}
int main(){
    vector<int> nums={1,2,3,4,5};
    int k;
    cin>>k;
    vector<int> ans;
    vector<vector<int>> v;
    subset(nums,ans,v,0,k);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


}