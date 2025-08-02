#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={0,1,2,0,0,3,4,0,1,4};
    for(int i=0;i<v.size()-1;i++){
        bool flag=true;
        for(int j=0;j<v.size()-1-i;j++){
            if(v[j]==0){ swap(v[j],v[j+1]);
                flag=false;
                }
        }
        if(flag=true) break;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}