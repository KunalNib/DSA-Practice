#include<iostream>
using namespace std;
int sum(int a,int b){
    if(a>b) return 0;
    if(a%2!=0){
        return a+sum(a+2,b);
    }
    else{
        a++;
        return a+sum(a+2,b);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
}