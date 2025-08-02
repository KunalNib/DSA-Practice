#include<iostream>
using namespace std;
mazepath(int sr,int sc,int er,int ec){
    if(sr>er ||sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int right=mazepath(sr,sc+1,er,ec);
    int down=mazepath(sr+1,sc,er,ec);
    return right+down;
}
maze2(int er,int ec){
    if(ec<0 || er<0) return 0;
    if(er==1 && ec==1) return 1;
    int right=maze2(er,ec-1);
    int down=maze2(er-1,ec);
    return right+down;

}
// void printpath(int sr,int sc,int er,int ec,string s){
//     if(sr>er ||sc>ec) return;
//     if(sr==er && sc==ec) {
//         cout<<s<<endl;;
//         return;}
//     printpath(sr,sc+1,er,ec,s+'R');
//     printpath(sr+1,sc,er,ec,s+'D');
// }
void printpath(int sr,int sc,string s){
    if(sr<0 ||sc<0) return;
    if(sr==1 && sc==1) {
        cout<<s<<endl;;
        return;}
    printpath(sr,sc-1,s+'R');
    printpath(sr-1,sc,s+'D');
}
int main(){
    string s;
    cout<<mazepath(1,1,3,3)<<endl;
    cout<<maze2(3,3)<<endl;
    printpath(3,3,s);
}