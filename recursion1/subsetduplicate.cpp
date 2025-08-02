#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void subsets(string s,string t,vector<string>& v,int idx,bool flag){
    if(idx==s.size()){
        v.push_back(t);
        return;
    }
    char ch=s[idx];
    if(idx==s.size()-1){
        if(flag==true) subsets(s,t+ch,v,idx+1,true);
        subsets(s,t,v,idx+1,true);
        return;
    }
    char dh=s[idx+1];
    if(ch==dh){
        if(flag==true) subsets(s,t+ch,v,idx+1,true);
        subsets(s,t,v,idx+1,false);
    }
    else{
        if(flag==true) subsets(s,t+ch,v,idx+1,true);
        subsets(s,t,v,idx+1,true);
    }
}
int main(){
    string s="aba";
    sort(s.begin(),s.end());
    vector<string> v;
    subsets(s,"",v,0,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;;
    }


}