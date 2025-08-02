#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(12);
    v.push_back(34);
    v.push_back(97);
    v.push_back(67);
    v.push_back(45);
    for(int i=0;i<5;i++){
        cout<<v.at(i)<<" ";
    }
    sort(v.begin(),v.end());
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<v.at(i)<<" ";
    }
}