#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s="123456";
    // string to int
    int x=stoi(s);
    cout<<x+1<<endl;
    // sting to long long
    string t="12345678912345678";
    long long g=stoll(t);
    cout<<g;
    

}