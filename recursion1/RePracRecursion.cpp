#include<iostream>
using namespace std;

string skipaChar(string s,char chartoSkip,string ans){
    if(s=="") return ans;
    char ch=s[0];
    if(ch!=chartoSkip){
        ans+=ch;
    }
    return skipaChar(s.substr(1),chartoSkip,ans);

}
int main(){
    string s="Raghav Garg";
    char chartoSkip='a';
    string newS=skipaChar(s,chartoSkip,"");
    cout<<newS;
}