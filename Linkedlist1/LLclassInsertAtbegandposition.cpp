#include<iostream>
using namespace std;
//User defined Data type
class Node{
    public:
        int val;
        Node * next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};
//Defining a class for Linkedlist
//User Defined Data Structure
class LinkedList{
    public:
    Node * head;
    Node * tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    //InsertAtend Function for inserting element at the end of LinkedList
    void insertAtend(int val){
        Node * temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    //trying by myself Insert at beginning
    void insertAtbeg(int val){
        Node * temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    //how about insert at given index
    void insert(int val,int idx){
        if(idx==0){ insertAtbeg(val);
         return ;}
        else if(idx==size){ insertAtend(val);
            return;}
        else if(idx>size || idx<0) {cout<<"Invalid Index"<<endl;
        return;}
        Node * temp=new Node(val);
        int i=0;
        Node * t=head;
        while(i<idx-1){
            t=t->next;
            i++;
        }
        temp->next=t->next;
        t->next=temp;
        size++;
    }
    //getelement through index function
    int getElementidx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Index does not exist !!"<<endl;
            return -1;
        }
        Node * temp=head;
        for(int i=0;i<idx;i++){
            temp=temp->next;
        }
        return temp->val;


    }
    //Deleting Node at Head
    void deleteAthead(){
        if(size==0) cout<<"LinkedList is Empty!!"<<endl;
        else{
            head=head->next;
            size--;
        }
    }
    //Deleting Node at Tail
    void deleteATend(){
        if(size==1){
            head=tail=NULL;
            size--;
        }
        if(size==0){
            cout<<"LinkedList is Empty!!"<<endl;
        }
        else {
            Node * temp=head;
            for(int i=1;i<size-1;i++){
                temp=temp->next;
            }
            temp->next=NULL;
            size--;
        }
    }
    //Deleting at Index
    void deleteAtidx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
        }
        else if(idx==0) deleteAthead();
        else if(idx==size-1) deleteATend();
        else{
            Node * temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    //Display for Displaying LinkedList
    Display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;

    ll.insertAtbeg(2);
    
    ll.insert(1,0);
    ll.insertAtend(10);
    ll.insertAtend(20);
    ll.Display();
    cout<<ll.size<<endl;

    ll.insertAtend(30);
    ll.insertAtend(40);
    ll.insertAtend(50);
    ll.Display();
    cout<<ll.size<<endl;
    ll.insertAtbeg(5);
    ll.Display();
    cout<<ll.size<<endl;
    ll.insert(35,4);
    ll.Display();
    cout<<ll.size<<endl;
    ll.insert(100,20);
    ll.deleteAthead();
    ll.Display();
    ll.deleteATend();
    ll.Display();
    ll.deleteAtidx(3);
    ll.Display();
    cout<<ll.getElementidx(2)<<endl;
    cout<<ll.getElementidx(200)<<endl;
}