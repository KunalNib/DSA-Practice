#include<iostream>
using namespace std;
//Node class :IMP:
class Node{
    public:
    int val;
    Node * next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
//It displays the Linked list iteratively
void Display(Node * Head){
    Node * temp=Head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//It returns the size of linked list
int size(Node * Head){
    Node * temp=Head;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
}
//It prints the linked list recursively
void Recursivedisplay(Node * Head){
    if(Head==NULL) return;
    cout<<Head->val<<" ";
    Recursivedisplay(Head->next);
}
//It prints the linked list in reverse order
void revll(Node * head){
    if(head==NULL) return;
    revll(head->next);
    cout<<head->val<<" ";
}
int main(){
    //Creating linked list
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    //linking the Nodes
    a->next=b;
    b->next=c;
    c->next=d;
    Display(a);
    cout<<size(a)<<endl;
    Recursivedisplay(a);
    cout<<endl;
    revll(a);
}