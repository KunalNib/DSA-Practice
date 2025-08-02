#include<iostream>
using namespace std;
class vehicle{
    //when we run this code we can see that if we call a constructor or make a object
    //then the constructor of a parent class gets called first and then the child is called
    public:
        int tyresize;
        int enginesize;
        int noofseats;
        string companyname;
        vehicle(){
            cout<<"vehicle ka constructor call hua"<<endl;
        }
        void showcompany(){
            cout<<companyname<<endl;
        }
};

//public:-can be accessed from outside,can be inherited-->low security
//protected:- can't be accessed from outside,can be inherited->medium security
//private:-can't be accessed from outside ,can't  be inherited->high security

//Imp:- security can only be upgraded not downgraded in class while assiging access specifier to a child class
class car:public vehicle{
    public:
        int steeringsize;
        car(){
            cout<<"car ka constructor call hua"<<endl;
        }
};
class bike:public vehicle{
    public:
        int handlesize;
        bike(){
            cout<<"bike ka constructor call hua"<<endl;
        }
};
int main(){
    car honda;
    honda.tyresize=10;
    honda.steeringsize=3;
    honda.noofseats=5;

    cout<<honda.noofseats<<endl;

    bike tvs;
    tvs.enginesize=10;
    tvs.handlesize=4;
    tvs.noofseats=2;
    tvs.companyname="tvs";
    cout<<tvs.noofseats<<endl;
    tvs.showcompany();
}