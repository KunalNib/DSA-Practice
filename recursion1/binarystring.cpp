#include<iostream>
using namespace std;
void genbin(string s,int n){
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    if(s.size()==0 || s[s.size()-1]!='1'){
    genbin(s+"1",n);
    }
    genbin(s+"0",n);
    
}
int main(){
    int n;
    cin>>n;
    genbin("",n);
    }