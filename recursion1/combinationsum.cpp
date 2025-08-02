#include<iostream>
#include<vector>
using namespace std;
void combination(vector<int>& v,vector<int> u,int n,int idx){
    if(n==0) {
        for(int i=0;i<u.size();i++){
            cout<<u[i];
        }
        cout<<endl;
        return;
    }
    if(n<0){
        return;
    }
    for(int i=idx;i<v.size();i++){
        u.push_back(v[i]);
        combination(v,u,n-v[i],i);
        u.pop_back();
    }

}

int main(){
    vector<int> v={10,1,2,7,6,1,5};
    vector<int> u;
    combination(v,u,8,0);
}