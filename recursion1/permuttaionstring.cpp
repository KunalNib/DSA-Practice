#include<iostream>
using namespace std;
void permutation(string s,string t){
    if(s.size()==0){
        cout<<t<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        permutation(left+right,t+s[i]);
    }
}
int main(){
    string s="abcd";
    permutation(s,"");
}