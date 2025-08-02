#include<iostream>
using namespace std;
//A and B are parent classes
class A{
public:
string Aname;

};
class B{
public:
string Bname;
// C as a child of A and B
};
class C:public A,public B{
public:
string Cname;
// D as a child of C
};
class D:public C{
public:
string Dname;

//E and F as children of D
};
class E:public D{
public:
string Ename;

};
class F:public D{
public:
string Fname;
};
int main(){
    F Fobj;
    Fobj.Aname="kunal";
    cout<<Fobj.Aname<<endl;
}