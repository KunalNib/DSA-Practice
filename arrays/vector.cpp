#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;//don't need to mention size
    vec.push_back(6);
    vec.push_back(1);
    vec.push_back(9);
    for(int i=0;i<=2;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    cout<<vec.size();
}