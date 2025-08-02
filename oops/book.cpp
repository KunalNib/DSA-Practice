#include<iostream>
using namespace std;
class Book{
    public:
        string name;
        int price;
        int Noofpages;

        int  CountBook(int p){
            if(price<p) return 0;
            else return 1;
        }
        bool isbookpresent(string title){
            if(name==title) return true;
            else return false;
        }
};
int main(){
    Book Diary;
    Diary.name="Diary";
    Diary.price=100;
    Diary.Noofpages=250;
    cout<<Diary.CountBook(200)<<endl;
    cout<<Diary.isbookpresent("Diary");

}