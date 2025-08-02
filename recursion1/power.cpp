#include<iostream>
using namespace std;
double pow(double a,int b){
    if(b<0){
        b=-b;
        a=a*pow(a,b-1);
        return 1/a;
    }
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main(){
    double a;
    int b;
    cin>>a>>b;
    cout<<pow(a,b);
}