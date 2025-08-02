#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=0;
    cout<<n<<endl;
    int x=n;
    while(x>0){
        temp=x;
        x=x&(x-1);
    }
    temp*=2;
    cout<<temp-n;

}