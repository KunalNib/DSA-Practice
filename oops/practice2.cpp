/*
Q2. Create a class to specify data on students with these attributes:
Roll number, Name, Department, Course,
Year of joining. Create
2 class variables. Now, create a member function to check if two
students have the same
Department.
*/
#include<iostream>
using namespace std;
class Student{
    private:
    int Rollnumber;
    string name;
    string Dept;
    string course;
    int yearofJ;
    public:
     void setStudent(string name,int Rollnumber,string Dept,string course){
        this->name=name;
        this->Rollnumber=Rollnumber;
        this->Dept=Dept;
        this->course=course;
     }
     void getData(){
        cout<<name<<endl;
        cout<<Rollnumber<<endl;
        cout<<Dept<<endl;
        cout<<course<<endl<<endl;
     }
     void comparedept(Student &s1,Student &s2){
        if(s1.Dept==s2.Dept){
            cout<<"students have same departments"<<endl;
        }
        else{
            cout<<"students have different departments"<<endl;
        }
     }
};
int main(){
    Student kunal;
    Student parth;
    kunal.setStudent("kunal",70,"CSE","Problemsolving");
    parth.setStudent("parth",39,"CSE","Webdevlopment");
    kunal.getData();
    parth.getData();

    kunal.comparedept(kunal,parth);
}