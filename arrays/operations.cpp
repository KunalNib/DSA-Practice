#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(45);
    v.push_back(13);
    v.push_back(11);
    v.push_back(0);
    v.push_back(7);
    v.push_back(82);
    v.push_back(86);
    v.push_back(9);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.capacity()<<endl;;
    cout<<v.size();
}
