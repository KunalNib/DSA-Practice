#include<iostream>
using namespace std;
int main () {
    int cp,sp;
    cout<<"enter the cost price";
    cin>>cp;
    cout<<"enter the selling price";
    cin>>sp;
    if(cp>sp){
        cout<<" seller has made a loss of"<<" "<<cp-sp<<"rs";
    }
    if(sp>cp){
        cout<<"seller has made a profit of"<<" "<<sp-cp<<"rs";
    }
    return 0;
}