#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q){
    int i=0;
    while(i<q.size()){
        int x=q.front();
        cout<<q.front()<<" ";
        q.pop();
        q.push(x);
        i++;
    }
    cout<<endl;
}

void removeEvenPos(queue<int>& q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2==0){
            q.pop();
        }
        else{
            int x=q.front();
            q.pop();
            q.push(x);
    }
    }
}

//Reverse Queue

void revQueue(queue<int>& q){
    stack<int> st;
    int n=q.size();
    for(int i=0;i<n;i++){
        st.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        q.push(st.top());
        st.pop();
    }
    cout<<endl;
}

int main(){
    queue<int> q;

    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    display(q);
    revQueue(q);
    display(q);
    removeEvenPos(q);
    display(q);
}