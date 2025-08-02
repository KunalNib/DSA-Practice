#include<iostream>
using namespace std;
double pow(double a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    if(b<0){
        b=-b;
        if(b%2!=0){
        return 1/pow(a,b/2)*pow(a,(b/2))*a;
        }
        else{
            double x=pow(a,b/2);
            return 1/(x*x);
        }

    }
    if(b%2!=0){
        return pow(a,b/2)*pow(a,(b/2+1));
    }
    else{
        double x=pow(a,b/2);
        return x*x;
    }
}
int main(){
    double a;
    int b;
    cin>>a>>b;
    cout<<pow(a,b);
}