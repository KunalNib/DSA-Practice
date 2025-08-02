#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string s="kunal wants to be a programmer and a gamer gamer";
    vector<string> v;
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        // cout<<temp<<endl;
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    int maxcount=1;
    int count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxcount=max(maxcount,count);
    }
    cout<<maxcount<<endl;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
}