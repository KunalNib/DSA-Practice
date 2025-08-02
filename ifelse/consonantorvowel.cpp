#include<iostream>
using namespace std;
int main () {
    char ch;
    cout<<"enter the character";
    cin>>ch;
    int aschii =(int)ch;
    
        if(aschii>=97 && aschii<=122|| aschii>=65 && aschii<=90)
        {
            if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o' || ch=='u'|| ch=='A'||ch=='E'||ch=='I'|| ch=='O'||ch=='U'){
                cout<<ch<<" "<< "is a vowel";
            }
            else{
                cout<<ch<<" "<<" is a consonent";
            }
        }
        else{
            cout<<"enter only alphabets";
        }
    

}