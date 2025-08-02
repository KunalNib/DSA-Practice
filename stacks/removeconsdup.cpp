#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

string removeConsDup(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(st.top()!=s[i]){
             st.push(s[i]);
        }
    }
    s="";
    while(!st.empty()){
        s.push_back(st.top());
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    string s="aaabbcddaabffg";
    // string ans;
    // ans.push_back(s[0]);
    // for(int i=1;i<s.size();i++){
    //     if(s[i]!=s[i-1]) ans+=s[i];
    // }
    // cout<<ans;

    cout<<removeConsDup(s);
}