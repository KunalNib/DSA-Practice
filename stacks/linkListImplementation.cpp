#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node * next;
    Node(int val){
        this->val=val;
        this->next=next;
    }
};
class Stack{
    public:
    Node * head;
    int length;
    Stack(){
        head=NULL;
        length=0;
    }

    void push(int val){
        Node * temp=new Node(val);
        temp->next=head;
        head=temp;
        length++;
    }
    void pop(){
        if(head==NULL){
             cout<<"Stack is Empty!"<<endl;
             return;
        }
        head=head->next;
        length--;
    }
    int top(){
        if(head==NULL){
             cout<<"Stack is Empty!"<<endl;
             return -1;
        }
        return head->val;
    }
    int size(){
        return length;
    }
    void print(Node * temp){
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";
    }

    void display(){
        Node * temp=head;
        print(temp);
    }
};

int main(){
    Stack st;
    st.top();
    st.push(10);
    st.push(11);
    st.push(12);
    st.pop();
    st.push(13);
    st.display();
    cout<<st.size();
}