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
void Display(Node * temp){
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    Node e(50);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;
    Display(&a);
    
}
