#include<iostream>
using namespace std;
//c++ class and constructor Implementation for Practical 5
class Info{
    private :
        string name;
        int age;
        string college;
    public :
    Info(){
        name="kunal";
        age=19;
        college="GHRCE";
    }
    Info(string n,int a,string s){
        name=n;
        age=a;
        college=s;
    }
    Info(const Info &s){
        name=s.name;;
        age=s.age;
        college=s.college;
    }
    ~Info(){
        //Destructor for deleting
    }
    void display(){
        //for displaying the data
        cout<<name<<endl<<age<<endl<<college<<endl<<endl;
    }
};
int main(){
    Info I;
    I.display();

    Info I1("Kunal",19,"GHRCE");
    I1.display();

    Info I2(I1);
    I2.display();
}