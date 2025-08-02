#include<iostream>
using namespace std;
class parent {
    public:
    string pname;
};
class child1: public parent{
    public:
    string c1name;
};
class child2: public parent{
    public:
        string c2name;
};

int main(){
    child1 kunal;
    kunal.pname="ananta";
    child2 just;
    just.pname="fatherjust";
    cout<<kunal.pname<<endl;
    cout<<just.pname<<endl;
}