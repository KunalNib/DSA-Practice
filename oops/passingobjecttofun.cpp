#include<iostream>
#include<algorithm>
using namespace std;
class Player{
    private:
        int health;
        int age;
        int score;
        bool alive;
    public:
        int getHealth(){
            return health;
        }
        int getAge(){
            return age;
        }
        int getScore(){
            return score;
        }
        int isAlive (){
            return alive;
        }
        void setHealth(int health){
            this->health=health;//this->member of class "this points to the member of class"
        }
        void setAge(int age){
            this->age=age;
        }
        void setScore(int score){
            this->score=score;
        }
        void setAlive (bool alive){
            this->alive=alive;
        }
        int add(Player a,Player b){
            return a.getScore()+b.getScore();
        }

};
int addscore(Player a,Player b){
    return a.getScore()+b.getScore();
}
Player getmaxscorePlayer(Player a,Player b){
    if(a.getScore()>b.getScore()){
        return a;
    }
    else return b;
}
int main(){
    Player kunal;
    kunal.setHealth(200);
    kunal.setScore(100);

    Player parth;
    parth.setScore(120);
    parth.setHealth(140);

    cout<<parth.add(kunal,parth)<<endl;// cout<<kunal.add(kunal,parth) will give the same answer
    cout<<addscore(kunal,parth)<<endl;

    Player samkit=getmaxscorePlayer(kunal,parth);
    cout<<samkit.getScore()<<endl;
    
    //Dynamic Memory allocation with the help of Pointers
    Player *Manvi=new Player;
    //Player Manviobj=*Manvi  <-- for getting a proper object;
    (*Manvi).setScore(100);
    //we can also use Manvi->function_Name instead of (*Manvi)
    cout<<(*Manvi).getScore();
}