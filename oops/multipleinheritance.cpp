#include<iostream>
using namespace std;
class parent1 {
    public:
    string p1name;
};
class parent2{
    public:
    string p2name;
};
class child: public parent1,public parent2{
    public:
        string cname;
};

int main(){
    child kunal;
    kunal.p1name="ananta";
    kunal.p2name="yogita";
    cout<<kunal.p1name<<endl;
    cout<<kunal.p2name<<endl;
}