#include<iostream>
using namespace std;
// void hanoi(int n,char s,char h,char d){
//     if(n==0) return;
//     hanoi(n-1,s,d,h);
//     cout<<s<<" to "<<d<<endl;;
//     hanoi(n-1,h,s,d);
// }
// int main(){
//     int n;
//     cin>>n;
//     hanoi(n,'A','B','C');
// }
void hanoi(int n,char source ,char helper,char destination){
    if(n==0) return;
    hanoi(n-1,source,destination,helper);
    cout<<source<<" to "<<destination<<endl;
    hanoi(n-1,helper,source,destination);

}
int main(){
    int n;
    cin>>n;
    hanoi(n,'A','B','C');
}