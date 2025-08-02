#include<iostream>
#include<vector>
using namespace std;
class Cricketer{
    private:
        string name;
        int age;
        int nooftest;
        int avgruns;
    public:
        //setters
        void setName(string name){
            this->name=name;
        }
        void setAge(int age){
            this->age=age;
        }
        void setNooftest(int nooftest){
            this->nooftest=nooftest;
        }
        void setAvgruns(int avgruns){
            this->avgruns=avgruns;
        }
        //getters

        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        int getNooftest(){
            return nooftest;
        }
        int getAvgruns(){
            return avgruns;
        }


};
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    Cricketer kunal;
    kunal.setName("kunal");
    kunal.setAge(19);
    kunal.setNooftest(10);
    kunal.setAvgruns(40);

    Cricketer parth;
    parth.setName("parth");
    parth.setAge(20);
    parth.setAvgruns(35);
    parth.setNooftest(12);

    vector<Cricketer> cricketers;

    for(int i=0;i<n;i++){
        Cricketer *cricketer=new Cricketer;
        string name;
        int age;
        int nooftest;
        int avgruns;
        cin>>name;
        cin>>age;
        cin>>nooftest;
        cin>>avgruns;
        cricketer->setName(name);
        cricketer->setAvgruns(avgruns);
        cricketer->setAge(age);
        cricketer->setNooftest(nooftest);
        cricketers.push_back(*cricketer);
    }
    cout<<endl;
    cout<<"The cricketers Names are here"<<endl;
    for(int i=0;i<n;i++){
        cout<<i+1<<") ";
        cout<<cricketers[i].getName()<<endl;
        cout<<cricketers[i].getAge()<<endl;
        cout<<cricketers[i].getNooftest()<<endl;
        cout<<cricketers[i].getAvgruns()<<endl;
        cout<<endl;
    }

}