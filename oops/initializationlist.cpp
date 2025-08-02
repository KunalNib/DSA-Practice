#include<iostream>
using namespace std;
class Student{
    public:
    int a;
    int b;
    Student(int a1,int b1):a(a1),b(b1){}
};
int main(){
    Student stu(10,20);
    cout<<stu.a;
}