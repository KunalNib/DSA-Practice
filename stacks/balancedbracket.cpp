#include<iostream>
#include<stack>
using namespace std;

bool balancedBrackets(string s){
    if(s.size()==0) return true;
    if(s.size()%2!=0) return false;
    if(s[0]==')') return false;

    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')'){
            if(st.size()==0)  return false;
            else if(st.top()=='(') st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){
    string s="()()(((())))";
    cout<<balancedBrackets(s);
}