#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter the marks :";
    cin>>n;
    // if(n>=91)
    // {
    //     cout<<"excellent";
    // }
    // else{
    //     if(n>=81){
    //         cout<<"very good";
    //     }
    //     else{
    //         if(n>=71){
    //             cout<<"good";
    //         }
    //         else{
    //             if(n>=61){
    //                 cout<<"Can do better";

    //             }
    //             else{
    //                 if(n>=51){
    //                     cout<<"average";

    //                 }
    //                 else{
    //                     if(n>=41){
    //                         cout<<"below average";

    //                     }
    //                     else{
    //                         if(n<40){
    //                             cout<<"fail";
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    if(n>=91){
        cout<<"excellent";
    }
    else if (n>=81){
        cout<<"very good";
    }
    else if (n>=71){
        cout<<"good";
    }
    else if (n>=61){
        cout<<"Can do better";
    }
    else if (n>=51){
        cout<<"average";
    }
    else if (n>=41){
        cout<<"below average";
    }
    else if (n<40){
        cout<<"fail";
    }
}