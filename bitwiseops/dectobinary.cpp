#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string res="";
    while(n>0){
        if(n%2==0){
            res='0'+res;
        }
        else{
            res='1'+res;
        }
        n=n>>1;//n=n/2;
    }
    cout<<count;
}