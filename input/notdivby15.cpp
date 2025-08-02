#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter the  number";
    cin>>n;
    if((n%5==0 || n%3==0 )&& n%15!=0){
        cout<<"it is divisble ny 3 0r 5 but not by 15";

    }
    else
    {
        cout<<"condition not matching";
    }
}