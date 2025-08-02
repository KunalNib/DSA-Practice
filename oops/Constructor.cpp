#include<iostream>
using namespace std;
class Bike{
    public:
        string name;
        int bikeage;

        // Bike(){
        //     cout<<"constructor called"<<endl;
        //     name="default";
        //     bikeage=0;
        // }
        Bike(string name="default",int bikeage=0 /* default values are entered*/){
            cout<<"constructor called"<<endl;
            this->bikeage=bikeage;
            this->name=name;
        }
        void displayInfo(){
            cout<<name<<endl;;
            cout<<bikeage<<endl;
        }
};
int main(){
    Bike Duet;
    Duet.displayInfo();
    cout<<endl;
    Bike Duet1("Duet",1);
    Duet1.displayInfo();
}