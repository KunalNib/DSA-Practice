#include<iostream>
using namespace std;
class vehicle{
    public:
    //making the function virtual for run-time binding
    virtual void show(){
        cout<<"this is parent show"<<endl;
    }
};
class Bike:public vehicle{
    public:
    void show(){
        cout<<"this is child show"<<endl;
    }
};
int main(){
    vehicle *v;
    //assingning v pointer to the class Bike
    v=new Bike;
    v->show();
    //assinging v pointer to the class vehicle
    v=new vehicle;
    v->show();
}