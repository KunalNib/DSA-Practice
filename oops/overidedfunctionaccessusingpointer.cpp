#include<iostream>
using namespace std;
class parent{
    public:
    virtual void show(){
        cout<<"parent ka show"<<endl;
    }
    void show1(){
        cout<<"parent ka show1"<<endl;
    }

};
class child:public parent{
    public:
    //changing the binding of the function to that of a run time
    virtual void show(){
        cout<<"child ka show"<<endl;
    }
    void show1(){
        cout<<"child ka show1"<<endl;
    }
};
int main(){
    parent * papa;
    child kid;
    //storing address of child in the pointer of the parent class
    papa=&kid;
    papa->show();
    //as the given function is not virtual it will class the funtion of a parent class
    //inspite of having address of child class
    papa->show1();
    //changing the pointer address
    papa= new parent;
    papa->show();
    papa->show1();
}