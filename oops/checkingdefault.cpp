#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    //we have to make a default constructor everytime we make a parameterized constructor
    //if we want to call default consturtor
    Student(){

    }
    Student(string name){
        this->name=name;
    }
};
int main(){
    Student s1;
    s1.name="kunal";
    cout<<s1.name;
}