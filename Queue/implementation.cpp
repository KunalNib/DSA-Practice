#include<iostream>
using namespace std;


//USe vector for efficient usuage
class Queue{
    public:
    int arr[10];
    int first;
    int rear;
    int n=10;

    Queue(){
        first=0;
        rear=0;
    }
    int size(){
        return rear-first;
    }

    void push(int val){
        if(size()==n){
            cout<<"OverFlow!!";
            return;
        }
        arr[rear]=val;
        rear++;
    }

    int front(){
        if(size()==0){
            cout<<"Error queue is empty";
            return 0;
        }
        return arr[first];
    }
    void pop(){
        if(size()==0){
            cout<<"UnderFlow Error";
        }
        first++;

    }

    int back(){
        if(size()==0){
            cout<<"queue is empty";
            return 0;
        }
        return arr[rear-1];
    }

    bool empty(){
        if(size()==0) return true;
        return false;
    }

    void display(){
        for(int i=first;i<rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Queue q;

    cout<<q.empty()<<" ";
    q.push(10);
    q.push(11);
    q.push(12);

    
    cout<<q.front()<<" ";
    cout<<q.size()<<" ";
    cout<<q.back()<<" ";

    cout<<q.empty()<<endl;
    q.display();
}