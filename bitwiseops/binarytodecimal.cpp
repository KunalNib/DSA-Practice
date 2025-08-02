#include<iostream>
using namespace std;
int main(){
    string s="00011111111";
    int n=s.size();
    int dec=0;
    for(int i=n-1;i>=0;i--){
        char ch=s[i];
        ch=ch-'0';
        dec+=ch*(1<<(n-i-1));
    }
    cout<<dec;
}