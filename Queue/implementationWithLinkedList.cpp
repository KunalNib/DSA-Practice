#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node * next;
    Node(int val){
        this->val=val;
        next=NULL;
    }
};

class Queue{
    public:
    Node *f;
    Node * b;
    int length;
    Queue(){
        f=NULL;
        b=NULL;
        length=0;
    }
    void push(int val){
        Node * temp=new Node(val);
        if(length==0){
            f=b=temp;
        }
        else{
            b->next=temp;
            b=temp;
        }
        length++;
    }
    void pop(){
        if(length==0){
            cout<<"UnderFlow ERROR!";
            return;
        }
        Node *temp=f;
        f=f->next;
        length--;
        delete(temp);
    }

    int size(){
        return length;
    }

    int front(){
        if(length==0){
            cout<<"Queue is Empty";
            return 0;
        }
        return f->val;
    }
    int back(){
        if(length==0){
            cout<<"Queue is Empty";
            return 0;
        }
        return b->val;
    }

    void display(){
        Node * temp=f;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main(){

    Queue q;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);

    q.display();
    q.pop();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;

}