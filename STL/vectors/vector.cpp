#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};

    // vector<int>:: reverse_iterator it;
    // for(it=vec.begin();it!=vec.end();it++){
    //     cout<<*(it)<<" ";
    // }

    vec.push_back(10);
    vec.pop_back();
    vec.erase(v.begin()+2);
    vec.insert(10,3);

    for(auto it=vec.rbegin();it!=vec.rend();it++){
        cout<<*(it)<<" ";
    }
    
}