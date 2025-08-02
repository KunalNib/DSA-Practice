#include<iostream>
using namespace std;
class player{
    public:
    int score;
    int health;
    string name;
};
int main(){
    player kunal;
    kunal.score=10;
    kunal.health=100;
    kunal.name="kunal";
    cout<<kunal.name;
}