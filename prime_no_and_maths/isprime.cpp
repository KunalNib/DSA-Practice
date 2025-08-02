#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<sqrt(n);i++){/*as we have studied the sqrt(n) divides factors in two parts
        equal parts so atleast one factor lie upto sqrt(n) so we are travelling to that making TC=O(root(n)*/
        if((n%i)==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<isprime(n);
}