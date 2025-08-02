#include<iostream>
using namespace std;
 class Gun{
    public:
    int ammo;
    int damage;
    int scope;
 }; 
 class Player{
    private:
    class Helmet{
        private:
            int level;
            int hp;
        public:
            void setLevel(int level){
                this->level=level;
            }
            void setHp(int health){
                this->hp=health;
            }
            int getHp(){
                return hp;
            }
            int getLevel(){
                return level;
            }
    };
        int score;
        int health;
        bool alive;
        int age;
        Gun gun;
        Helmet helmet;
    public:
        void setHealth(int health){
            this->health=health;
        }
        void setScore(int score){
            this->score=score;
        }
        void setAlive(bool alive){
            this->alive=alive;
        }
        void setAge(int age){
            this->age=age;
        }
        void setGun(Gun gun){
            this->gun=gun;
        }
        void setHelmet(int level){
            Helmet * helmet=new Helmet;
            helmet->setLevel(level);
            int health=0;
            if(level==1) health=25;
            else if(level==2) health=50;
            else if(level==3) health=100;
            else{
                cout<<"error level doesn't exist";
            }
            helmet->setHp(health);
            this->helmet=*helmet;
        }


        int getHealth(){
            return health;
        }
        int getScore(){
            return score;
        }
        bool getAlive(){
            return alive;
        }
        int getAge(){
            return age;
        }
        Gun getGun(){
            return gun;
        }
        void getHelmet(){
            cout<<helmet.getLevel()<<endl;
            cout<<helmet.getHp()<<endl;
        }

 };
 int main(){
    Player kunal;
    kunal.setHealth(100);
    kunal.setScore(20);
    kunal.setAlive(true);
    kunal.setAge(19);

    Player parth;
    parth.setAge(20);
    parth.setAlive(true);
    parth.setHealth(120);
    parth.setScore(18);

    cout<<kunal.getHealth();
    cout<<endl<<parth.getHealth()<<endl;

    Gun akm;
    akm.damage=45;
    akm.scope=2;
    akm.ammo=40;
    kunal.setGun(akm);
    
    Gun awm;
    awm.damage=150;
    awm.scope=8;
    awm.ammo=10;
    parth.setGun(awm);

    Gun gun123=kunal.getGun();
    cout<<gun123.damage<<endl;

    kunal.setHelmet(3);
    parth.setHelmet(2);

    kunal.getHelmet();
    parth.getHelmet();

    //array of objects
    Player players[2]={kunal,parth};
    cout<<players[1].getAge();
 }