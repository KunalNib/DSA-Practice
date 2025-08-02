#include<iostream>
using namespace std;
// void fun(int x=8,int y=4){// if we are giving a default value to one variable then we 
//   // should give  deflault values to all the variables ,or the program will not work
//     cout<<x<<" "<<y;
// }
// int main (){
//     fun();//default variables printed
//     cout<<endl;
//     fun(5,7); //new variables in place of defalut variables
// }
void fun(int x=7,bool y=true){
    cout<<x<<" "<<y;
}
int main(){
    fun(false);
}