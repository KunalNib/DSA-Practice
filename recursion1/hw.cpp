#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& v) {
        vector<int> v2(v.size(),0);
        int x=0;
        for(int i=0;i<v.size();i++){
            if(v2[i]==){
                v2[x]=v[i];
                x++;
            }
        }
        for(int i=0;i<v.size();i++){
            v[i]=v2[i];
        }
        return x-1;
}
using namespace std;
int main(){
    vector<int> v={1,1,2};
    int x=removeDuplicates(v);
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
}