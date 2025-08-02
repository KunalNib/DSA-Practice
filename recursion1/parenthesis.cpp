#include<iostream>
using namespace std;
void parenthesis(string s,int open,int close,int n){
    if(s.size()==2*n){
        cout<<s<<endl;
    }
    if(open<n){
        parenthesis(s+'(',open+1,close,n);
    }
    if(open>close){
        parenthesis(s+')',open,close+1,n);
    }
}
int main(){
    string s;
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    parenthesis(s,0,0,n);
}