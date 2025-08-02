#include<iostream>
#include<vector>
using namespace std;
// void skip(string s,string t,char ch,int i){
//     if(i==s.size()){
//         cout<<t;
//         return;
//     }
//     char a=s[i];
//     if(a==ch) skip(s,t,ch,i+1);
//     else{
//         skip(s,t+a,ch,i+1);
//     }
//     // if(a==ch) skip(s.substr(1),t,ch);
//     // else{
//     //     skip(s.substr(1),t+a,ch);
//     // }
// }
// int main(){
//     // char ch;
//     // cin>>ch;
//     // string s="kunal nibrad";
//     // skip(s,"",ch,0);
// }
void skipint(vector<int> u,vector<int>& v,int n,int i){
    if(i==u.size()){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        return;
    }
    int a=u[i];
    if(a==n) skipint(u,v,n,i+1);
    else{
        v.push_back(a);
        skipint(u,v,n,i+1);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> u={1,2,3,1,1,4,5,6};
    vector<int> v;
    skipint(u,v,n,0);
}