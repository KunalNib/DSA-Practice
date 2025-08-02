#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> q={1,2,3,4,5};

    q.push_back(10);
    q.push_back(11);
    q.push_back(11);
    q.push_back(11);
    q.push_back(11);
    q.push_back(11);
    for(int val: q){
        cout<<val<<" ";
    }
    cout<<endl<<q [3];
}