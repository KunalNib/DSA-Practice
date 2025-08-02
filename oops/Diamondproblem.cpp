//very important for interviews
/*why are we adding virtual keyword here?
--> so to answer this we can say that virtyal only creates a single instance of a class 
at a time there will be no multiple instances going to D which solves over Diamond problem
*/
#include<iostream>
using namespace std;
class A{
    public:
    string Aname;
};
class B:virtual public A{//covers only one instance at a time
    public:
    string Bname;
};
class C:virtual public A{//same here
    public:
    string Cname;
};
class D:virtual public B,virtual public C{//will work without virtual here but just for safety
    public:
    string Dname;
};
int main(){
    D Dobj;
    Dobj.Aname="kunal";
    cout<<Dobj.Aname<<endl;
}