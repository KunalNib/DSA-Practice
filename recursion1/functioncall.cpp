#include<iostream>
using namespace std;
int product(int a,int b){
    return a*b;
}
void greeting(){
    cout<<"good morning";
}
int main(){
    //return type
    cout<<product(2,4)<<endl;

    //non return(void)
    greeting();
    
    //built in
    int a=10;
    int b=50;
    cout<<endl<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b;

}