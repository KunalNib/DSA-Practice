#include<iostream>
using namespace std;
//polymorphism in C++
//function overloading
// void add(int a,int b){
//     cout<<a+b<<endl;
// }
// void add(int a,int b,int c){
//     cout<<a+b+c<<endl;
// }

//consturctor overloading;
class Student{
    public:
        string name;
        int rollno;
        int age;

        Student(string s,int r,int a): name(s),rollno(r),age(a){}
        Student(string s,int r): name(s),rollno(r){}
        Student(string s): name(s){}
};
int main(){
    Student kunal("kunal");
    cout<<kunal.rollno;
}