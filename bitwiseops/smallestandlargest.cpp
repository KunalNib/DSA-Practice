#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //for smallest power of 2;
    int k=1;
    int x=n;
    while(true){
        if((x&1)==1) break; 
        k++;
        x=x>>1;
    }
    int y=0;
    while(n>0){
        n=n>>1;
        y++;
    }
    cout<<"the smallest power of 2 is "<<k<<endl;
    cout<<"the largest power of 2 is "<<y<<endl;
}