#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    Student(){}
    Student(string name,int rno){
        this->name=name;
        this->rno=rno;
    }
};
void change(Student * s){
    s->name="kunal1";
    s->rno=700;
}
int main(){
    //here we are using dynamic allocation with the help of new keyword
    // we are just creating a class at runtime and storing its address at the pointer s
    Student *s=new Student;
    s->name="kunal";
    s->rno=70;

    cout<<s->name<<" ";
    cout<<s->rno<<endl;
    change(s);
    cout<<s->name<<" ";
    cout<<s->rno<<endl;

}