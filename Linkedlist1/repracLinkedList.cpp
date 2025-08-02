#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node * next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    Node * tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtBeg(int val){
        Node *temp= new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtEnd(int val){
        Node * temp = new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void insertATIdx(int val,int idx){
        if(idx==0){
            insertAtBeg(val);
            return;
        }
        else if(idx==size){
            insertAtEnd(val);
            return;
        }
        else if(idx>size || idx<0){
            cout<<"Invalid Index!";
            return;
        }
        Node * temp=new Node(val);
        Node * t=head;
        for(int i=0;i<idx-1;i++){
            t=t->next;
        }
        temp->next=t->next;
        t->next=temp;
        size++;
    }
    void deleteATBeg(){
        if(size==0){
            cout<<"Linked List is empty";
            return;
        }
        head=head->next;
    }

    void deletAtEnd(){
        if(size==0){
            cout<<"Linked list is empty";
        }
        if(size==1){
            deleteATBeg();
            return;
        }
        Node * temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        size--;
    }


    void Display(){
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
    }
    
};
int main(){

    // LinkedList ll;
    // ll.insertAtBeg(10);
    // ll.insertAtEnd(11);
    // ll.insertATIdx(10,2);
    // ll.insertAtBeg(20);
    // ll.insertAtEnd(15);
    // ll.Display();
    // cout<<ll.size;

    LinkedList ll2;
    ll2.insertAtBeg(10);
    ll2.deletAtEnd();
    ll2.insertAtBeg(10);
    ll2.Display();
}