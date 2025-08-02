#include<iostream>
#include<string>
using namespace std;
int main (){
    string input;
    getline(cin,input);
    cout<<input<<endl;
    int  n = input.length(), left = n-1 ;
    int right=0;
    while(right<=left){
        swap(input[right],input[left]);
        right++;
        left--;
    }
    cout<<input;
    return 0;
}