#include<iostream>
using namespace std;
class complexnumber{
    public:
    int real;
    int imaginary;
    //operator overloading
    complexnumber operator +(complexnumber c){//if we use &c the content in c will change
        c.real=c.real+this->real;
        c.imaginary=c.imaginary+this->imaginary;
        return c;
    }
    //how about other
    complexnumber operator -(complexnumber c){
        c.imaginary=this->imaginary-c.imaginary;
        c.real=this->real-c.real;
        return c;
    }
};
int main(){
    complexnumber a1,a2;
    a1.imaginary=10;
    a1.real=5;
    a2.imaginary=15;
    a2.real=8;
    cout<<a1.real<<" "<<a1.imaginary<<endl;
    cout<<a2.real<<" "<<a2.imaginary<<endl;
    complexnumber a3=a1+a2;
    cout<<a3.real<<" "<<a3.imaginary<<endl;
    complexnumber a4=a1-a2;
    cout<<a4.real<<" "<<a4.imaginary<<endl;
}