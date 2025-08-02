#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int age;
        int RollNo;
        Student(){
            name="default";
            age=0;
            RollNo=0;
        }
        Student(Student &S){
            name=S.name;
            age=S.age;
            RollNo=S.RollNo;
        }
};
int main(){
    Student parth;
    parth.name="parth";
    parth.RollNo=20;
    parth.age=19;

    Student parth1(parth);
    cout<<parth1.name<<endl;
    parth1.name="parth1";
    cout<<parth1.name<<endl;
    cout<<parth.name<<endl;
}