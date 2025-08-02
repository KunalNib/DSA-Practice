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
//changing return type to Node* for deleting the head node and returning a new head node;
//this if for a target Node
// Node * deletenode(Node * head,Node * tar){
//     if(head==tar){
//         head=head->next;
//         return head;
//     }
//     Node * temp=head;
//     while(temp->next!=tar){
//         temp=temp->next;
//     }
//     temp->next=temp->next->next;
//     return head;
// }

//what if i don't have a target node but have a target value;
Node * deletenode(Node * head,int targetVal){
    if(head->val==targetVal){
        head=head->next;
        return head;
        }
    Node * temp=head;
    while(temp->next->val!=targetVal){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}

int main(){
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    Node *e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    Node * head=a;
    Display(head);
    head=deletenode(head,a->val);
    head=deletenode(head,c->val);
    Display(head);
//     // Solution for Leetcode 397 as it uses only two lines
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */class Solution {
// public:
// void deleteNode(ListNode* temp) {
//     temp->val=temp->next->val;
//     temp->next=temp->next->next;
// }
// };
}