#include<iostream>
using namespace std;
class vehicle{
    public:
    virtual void calculatemilage()=0;
};
class Bike:public vehicle{
    public:
    string bname;
    void calculatemilage(){
        cout<<"milage calculated";
    }
};
int main(){
    Bike bike;
    bike.bname="duet";
    cout<<bike.bname;
}