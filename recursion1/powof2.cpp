#include<iostream>
using namespace std;
bool powof2(int n){
    if(n==1) return true;
    if(n==2) return true;
    if(n%2!=0) return false;
    if(powof2(n/2)== true){
        return true;
    }
    

}
int main(){
    int n;
    cin>>n;
    cout<<powof2(n);
}