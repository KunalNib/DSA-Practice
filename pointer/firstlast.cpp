#include<iostream>
using namespace std;
void find(int n,int *p1,int*p2){
    *p1=n;
    for(int i=1;(*p1)>10;i++){
        (*p1)/=10;
    }
    cout<<"first="<<*p1;
    *p2=n%10;
    cout<<"last="<<*p2;

}
int main(){
    int n;
    cout<<"enter any number :";
    cin>>n;
    int first,last;
    int *p1=&first;
    int *p2=&last;
    find(n,p1,p2);
    return 0;
}