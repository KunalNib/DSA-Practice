#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){

    unordered_map<string,int> unmp;
    map<string,int> mp;
    mp["TV"]=10;
    mp["Cooler"]=10;
    mp["WASHING MACHINE"]=10;
    mp["AC"]=10;

    unmp["TV"]=10;
    unmp["Cooler"]=10;
    unmp["WASHING MACHINE"]=10;
    unmp["AC"]=10;

    mp.insert({"Like",100});

    for(auto p:mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    for(auto p:unmp){
        cout<<p.first<<" "<<p.second<<endl;
    }
}