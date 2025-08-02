#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter the string";
    getline(cin,s);
    cout<<s;
    int n=s.length();
    cout<<n<<endl;
    reverse(s.begin(),s.begin()+n/2);
    cout<<s;
}