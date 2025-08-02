#include<iostream>
using namespace std;
class A{
    
    int aprivate=10;
    public:
    //declartion of friend function
    friend class B;
    //a friend operator declartion
    friend A operator +(A &a1,A &a2);
    friend void show(A &a);
    void show2(){
        cout<<aprivate<<endl;
    }
};
//operator overloading defination
A operator +(A &a1,A &a2){
    A a3;
    a3.aprivate=a1.aprivate+a2.aprivate;
    return a3;
}
//initializing a friend function
void show(A &a){
    cout<<a.aprivate<<endl;
}
class b{
    public:
    void setaprivate(A &a){
        a.aprivate=11;
    }
};
int main(){
    A a;
    a.show2();
    show(a);
    b B;
//     B.setaprivate(a);
//     a.show2();

//     //operator overloading test
//     A a1;
//     A a2;
//     A a3=a1+a2;
//     show(a3);
// 
}