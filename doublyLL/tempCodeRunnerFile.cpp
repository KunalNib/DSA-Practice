#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node * next;
    Node * prev;
    Node(val){
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};
void display(Node * head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    Node * a=new Node(10);
    Node * b=new Node(20);
    Node * c=new Node(30);
    Node * d=new Node(40);
    Node * e=new Node(50);
    a->next=b;
    c->next=d;
    d->next=e;
    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;
}