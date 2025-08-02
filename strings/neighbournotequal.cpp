#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string : ";
    getline(cin,s);
    cout<<s<<endl;
    int count=0;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(l==1){
            break;
        } 
        if(l==2 && s[0]!=s[1]){
            count=1;
            break;
        }
        if(i==0 && s[i]!=s[i+1]){
            count++;
        }
        else if(i==l-1 && s[i]!=s[i-1]){
            count++;
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            count++;
        }
    }
    cout<<count;
}