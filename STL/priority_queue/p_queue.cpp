#include<iostream>
#include<queue>
using namespace std;
int main(){

    priority_queue<int,vector<int>,greater<int>> q;

    q.push(10);
    q.push(9);
    q.push(15);
    q.push(14);
    q.push(13);

    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
}