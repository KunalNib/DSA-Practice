#include<iostream>
#include<vector>
using namespace std;
void seq(vector<int>& v,int idx,vector<int> ans,int k){
    if(ans.size()==k){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
        return ;
    }
    for(int i=idx;i<v.size();i++){
        ans.push_back(v[i]);
        seq(v,i+1,ans,k);
        ans.pop_back();
        }


}
int main(){
    vector<int> v={1,2,3,4};
    seq(v,0,{},2);
}