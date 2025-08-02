#include<iostream>
#include<algorithm>
using namespace std;
class Gun{
    public:
    int ammo;
    int scope;
    int damage;
};


class Player{
    private:
    class Helmet{
        int Level;
        int Hp;
        public:
            void setHp(int Hp){
                this->Hp=Hp;
            }
            void setLevel(int Level){
                this->Level=Level;
            }
            int getHp(){
                return Hp;
            }
            int getLevel(){
                return Level;
            }
    };
        int health;
        int age;
        int score;
        bool alive;
        Gun gun;
        Helmet helmet;
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
        Gun getGun(){
            return gun;
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
        void setGun(Gun gun){
            this->gun=gun;
        }

        void setHelmet(int level){
            Helmet * helmet= new Helmet;
            helmet->setLevel(level);
            int health=0;
            if(level==1){
                health=25;
            }
            else if(level==2){
                health=50;
            }
            else if(level==3){
                health=100;
            }
            else {
                cout<<"error level does not exist";
            }
            helmet->setHp(health);
            this->helmet=*helmet;

        }
        void getHelmet(){
            cout<<helmet.getLevel()<<endl;
            cout<<helmet.getHp()<<endl;
        }
        int add(Player a,Player b){
            return a.getScore()+b.getScore();
        }
};
int main(){
    Player kunal;
    Player parth;
    kunal.setScore(100);
    kunal.setAge(19);
    kunal.setAlive(true);
    kunal.setHealth(200);
    kunal.setHelmet(2);

    parth.setScore(120);
    parth.setAge(20);
    parth.setAlive(true);
    parth.setHealth(180);
    parth.setHelmet(3);

    //Gun
    Gun akm;
    akm.ammo=45;
    akm.damage=40;
    akm.scope=4;
    kunal.setGun(akm);

    Gun awm;
    awm.damage=150;
    awm.ammo=10;
    awm.scope=8;
    parth.setGun(awm);

    Gun gun123=parth.getGun();
    cout<<gun123.ammo<<endl;

    kunal.getHelmet();
}