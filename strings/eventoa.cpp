#include<iostream>
using namespace std;
int main(){
    string s;
    //cin>>s;//only if the given string has no spaces
    getline(cin,s);
    cout<<s;
    cout<<endl;
    for(int i=0;s[i]!='\0';i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<s;

}