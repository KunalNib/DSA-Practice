#include<iostream>
using namespace std;
void display(){
    /* when defining a static the variable declared remains same
    it is only declared first time and then the same address is used for
    the variable throughout the program */
    static int b=10;
    cout<<b<<endl;
    b++;
}
class Bike{
    public:
        string bikename;
        int bikeage;
        static int noofbikes;
        Bike(string bikename="default",int bikeage=0){
            this->bikename=bikename;
            this->bikeage=bikeage;
        }
        static void noOfbikes(){
            noofbikes++;
        }

};
int Bike::noofbikes=10;
int main(){
    Bike Duet("Duet",2);
    cout<<Duet.bikename<<endl;
    cout<<Duet.bikeage<<endl;
    cout<<Duet.noofbikes<<endl;
    Duet.noOfbikes();
    cout<<Duet.noofbikes<<endl;
    Bike Honda("Honda",4);
    cout<<Honda.noofbikes;
}