#include<iostream>
using namespace std;
class parent{
    private:
    string pname;
    public:
    void show(){
        cout<<"this is a parent function";
    }
};
class child:public parent{
    private:
    string cname;
    public:
    //uncommenting this will override the show function in parent class
    void show(){
        cout<<"this is a child function";
    }
};
int main(){
    child kunal;
    kunal.parent::show();
}