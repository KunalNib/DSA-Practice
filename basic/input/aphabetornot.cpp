#include<iostream>
using namespace std;
int main () {
    char ch;
    cout<<"enter the character:";
    cin>>ch;
    int small=(int)ch;
    if(small>=65 && small=90 ||small>=97 && small<=122)
    {cout<<"it is a alphabet";
    }
    else{cout<<"it is not a alphabet";}
}
