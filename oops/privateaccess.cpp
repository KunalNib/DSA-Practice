#include<iostream>
using namespace std;
class player{
    public:
    int score;
    private:
    int health;
}
int main(){
    player kunal;
    kunal.health=199;
     //     privateaccess.cpp: In function 'int main()':        
    // privateaccess.cpp:11:11: error: 'int player::health' is private within this context
    //      kunal.health=199;
    //            ^~~~~~
    /*this is the error showed when we try to access a private class member in main function so
    it tells us that we can't access the private class member from outside the class */
}