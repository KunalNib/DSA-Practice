#include<iostream>
#include<vector>
using namespace std;

void subset(vector<int>& v,int idx,vector<int> u){// no & in vector U due to making of new vector at every call
    if(idx==v.size()){

    for(int ele :u){
        cout<<ele;
    }
    cout<<endl;
    return;
    }
    subset(v,idx+1,u);
    u.push_back(v[idx]);
    subset(v,idx+1,u);
}
int main(){
    vector<int> v={1,2,3};
    vector<int> u;
    subset(v,0,u);

}