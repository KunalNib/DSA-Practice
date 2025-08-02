#include<iostream>
using namespace std;
int main () {
    float principle,rate,time,simple_interest;
    cout<<"enter the principle :";
    cin>>principle;
    cout<<"enter the rate";
    cin>>rate;
    cout<<"enter the time in yrs";
    cin>>time;
    simple_interest=(principle*rate*time)/100;
    cout<<simple_interest;
    }