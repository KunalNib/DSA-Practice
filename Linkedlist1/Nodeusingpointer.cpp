#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node * next=NULL;
    Node(int val){
        this->val=val;
    }
};

void Display(Node * head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//insert at end in case of manual allocation
void InsertAtend(Node * head,int val){
    Node * temp=new Node(val);
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=temp;
}
int main(){
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;
    Display(a);
    InsertAtend(a,60);
    Display(a);



}