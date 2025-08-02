#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s="leetcodedd";
    vector<int> v(26,0);
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int aschii=int(ch);
        v[aschii-97]++;
    }
    int max=0;
    for(int i=0;i<26;i++){
        if(v[i]>max) max=v[i];
    }
    for(int i=0;i<26;i++){
        if(v[i]==max) {
        cout<<(char)(i+97)<<" "<<max<<endl;
    }

    }}