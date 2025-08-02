#include<iostream>
using namespace std;
class Parent{
    public:
        int pub;
    private://will not be inherited
        int pri;
    protected:
        int pro;

    public:
        void showpri(){
            cout<<pri<<endl;
        }
        void setpri(int pri){
            this->pri=pri;
        }
        void setpro(int pro){
            this->pro=pro;
        }
        void showpro(){
            cout<<pro<<endl;
        }
};
class child: public Parent{//access specifier here determines the access of inherited elements
    public:
        string name;
        //for private;
        // we can access the private elements of the parents class through their inherited setters or getters
        //and also elements i
        // void showp(){
        //     showpri();
        // }
        // void setp(int pri){
        //     setpri(pri);
        // }
        // void show(){
        //     showpro();
        // }
        // void set(int pri){
        //     setpro(pri);
        // }
};
int main(){
    child kunal;
    kunal.name="kunal";
    cout<<kunal.name<<endl;
    kunal.set(100);
    kunal.show();
    kunal.setp(120);
    kunal.showp();

}