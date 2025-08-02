#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s="kunal wants to be a programmer";
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;;
    }

}