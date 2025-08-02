#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    int n=s.size();
    bool x=true;
    // for(int i=0;i<n;i++){
    //     if(s[i]!=t[i]){
    //         x=false;
    //     }
    // }
    if(s==t) cout<<true;
    else cout<<false;
    
}