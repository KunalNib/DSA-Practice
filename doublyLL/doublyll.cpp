#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node * next;
    Node * prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class LinkedList{
    public:
    int size;
    Node * head;
    Node * tail;
    LinkedList(){
        head=tail=NULL;
        this->size=0;
    }
    void insertAthead(int val){
        Node * temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void insertATend(int val){
        Node * temp= new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
            }
        size++;
    }
    void insertAtidx(int val,int idx){
        if(idx==0) insertAthead(val);
        else if(idx==size) insertATend(val);
        else if(idx<0 || idx>size) cout<<"invalid Index"<<endl;
        else{
            Node * temp=head;
            Node * t=new Node(val);
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next->prev=t;
            temp->next=t;
            t->prev=temp;
            size++;
        }
    }
    void deleteAthead(){
        if(size==0) cout<<"error list is already empty"<<endl;
        else{
            head=head->next;
            if(head) head->prev=NULL;
            if(head==NULL) tail=NULL;
            size--;
        }
    }
    void deleteAtend(){
        if(size==0) cout<<"error linked list is already empty!"<<endl;
        else if(size==1){
            deleteAthead();
        }
        else{
            tail=tail->prev;
            tail->next=NULL;
            size--;
        }
    }
    void deleteATidx(int idx){
        if(idx==0) deleteAthead();
        else if(idx==size-1) deleteAtend();
        else if(idx<0 || idx>size-1) cout<<"Invalid Index!!"<<endl;
        else{
            Node * temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            size--;
        }
    }
    int getAtidx(int idx){
        if(idx<0 || idx>size-1) cout<<"invalid index"<<endl;
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node * temp;
            if(size-idx-1>=idx){
                temp=head;
                for(int i=0;i<idx;i++){
                    temp=temp->next;
                }
            }
            else{
                temp=tail;
                idx=size-idx-1;
                for(int i=0;i<idx;i++){
                    temp=temp->prev;
                }
            }
            
            return temp->val;
        }
    }
    void Display(){
        if(size==0) cout<<"Linked List is empty"<<endl;
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void DisplayRev(){
        if(size==0) cout<<"Linked List is empty"<<endl;
        Node * temp=tail;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
    
};
int main(){
    LinkedList LL;
    LL.insertAthead(10);
    LL.insertAthead(12);
    LL.insertAthead(13);
    LL.insertAthead(14);
    LL.insertATend(11);
    LL.Display();
    cout<<LL.getAtidx(4)<<endl;
    LL.insertAtidx(13,2);
    LL.Display();
    LL.deleteAthead();
    LL.deleteAtend();
    LL.Display();
    LL.deleteATidx(2);
    LL.Display();
    LL.Display();
    LL.deleteATidx(2);
    LL.Display();
    LL.insertAthead(10);
    LL.insertAthead(12);
    LL.insertAthead(13);
    LL.insertAthead(14);
    LL.insertATend(11);
    LL.Display();
    cout<<LL.getAtidx(4)<<endl;
    cout<<LL.getAtidx(5)<<endl;
    cout<<LL.getAtidx(0)<<endl;
    
}