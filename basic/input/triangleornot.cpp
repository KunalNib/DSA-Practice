#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three sides of triangle";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a+b>c&&c+b>a&& a+c>b){
        cout<<"the given sides are of a triangle\n";
        if(a==b==c){
            cout<<"triangle is equilateral";
        }
        else if(a==b||b==c||a==c){
            cout<<("the triangle is isoceleus");
        }
        else if((a*a)==(a*a+b*b)||(b*b)==(a*a+c*c)||(c*c)==(b*b+a*a)){
            cout<<("the triangle is right angle triangle");
        }
        else{
            cout<<("the triangle is scalene");
        }
    }
    

}