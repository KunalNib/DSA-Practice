#include<iostream>
#include<vector>
using namespace std;

void subset(string s,string t,int idx,vector<string>& v){
    if(idx==s.size()){
    v.push_back(t);
    return;}
    subset(s,t+s[idx],idx+1,v);
    subset(s,t,idx+1,v);
}
int main(){
    string s="abc";
    vector<string> v;
    subset(s,"",0,v);
    for(string ele: v){
        cout<<ele<<endl;;
    }

}