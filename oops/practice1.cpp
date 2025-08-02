/* Que :-  Create a class ‘date’ that contains three members namely date,
month and year. Create 2 objects of this
class with different dates
and now compare the two. If the dates are equal then display
message as "Equal"
otherwise "Unequal". Use Getters & Setters.
*Note : The function should be a member function of this class.
*/
#include<iostream>
using namespace std;
class date{
    private:
    int d;
    int month;
    int year;
    public:
    void setDate(int date,int month,int year){
        this->d=date;
        this->year=year;
        this->month=month;
    }
    void getDate(){
        cout<<d<<" /";
        cout<<month<<" /";
        cout<<year<<" "<<endl;
    }
    void compare(date &d1,date &d2){
        if(d1.d==d2.d && d1.month ==d2.month && d1.year==d2.year){
            cout<<"Equal"<<endl;
        }
        else cout<<"unequal"<<endl;
    }
};

int main(){
    date d1,d2;
    d1.setDate(18,03,2005);
    d2.setDate(17,02,2004);
    d1.getDate();
    d2.getDate();
    d1.compare(d1,d2);
    d2.setDate(18,03,2005);
    d2.getDate();
    d1.compare(d1,d2);
}