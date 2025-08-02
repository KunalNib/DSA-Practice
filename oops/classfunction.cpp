#include<iostream>
using namespace std;
class player{
    public:
    int health;
    void showhealth(){
        cout<<"The health is "<<health<<endl;
    }
};
    int main(){
        player kunal;
        kunal.health=102;
        //syntax for calling a member fuction ==obj_name.fun_name(parameters)
        kunal.showhealth();
    }
