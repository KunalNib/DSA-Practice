#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s="abcd";
    //Length
    cout<<s.size();
    cout<<endl<<s.length();
    //push,pop_back
    s.push_back('e');
    s.push_back('f');
    cout<<endl<<s;
    s.push_back('g');
    s.push_back('h');
    cout<<endl<<s;
    s.pop_back();
    cout<<endl<<s;
    s.pop_back();
    cout<<endl<<s;
    //append "+";
    string t=" kunal";
    s=s+t;
    cout<<endl<<s;
    s=s+"manvi";
    cout<<endl<<s;
    s="kun"+s;
    cout<<endl<<s;
    //reverse
    reverse(s.begin(),s.end());
    cout<<endl<<s;
    
}