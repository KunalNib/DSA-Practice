#include<iostream>
using namespace std;
class parent{
    public:
    string pname;
};
class child:public parent{
    public:
    string cname;
};
class childofchild:public child{
    public:
    string cofcname;
};
int main(){
    childofchild just;
    just.pname="grandjust";
    just.cname="fatherjust";
    cout<<just.pname<<endl;
    cout<<just.cname<<endl;
}