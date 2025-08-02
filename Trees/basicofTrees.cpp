#include<iostream>
#include<climits>
using namespace std;

class Node{
    public:
    int val;
    Node * left;
    Node * right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void displayTree(Node * root){
    if(root==NULL) return;
    
    cout<<root->val<<endl;
    displayTree(root->left);
    displayTree(root->right);
    
}

int sumTree(Node * root){
    if(root==NULL) return 0;
    
    return root->val+sumTree(root->left)+sumTree(root->right);
}

int size(Node * root){
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}

int maxTree(Node * root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(maxTree(root->left),maxTree(root->right)));
}
int minTree(Node * root){
    if(root==NULL) return INT_MAX;
    return min(root->val,min(minTree(root->left),minTree(root->right)));
}

int levelTree(Node* root){
    if(root==NULL) return 0;
    return 1+max(levelTree(root->left),levelTree(root->right));
}

int productTree(Node * root){
    if(root==NULL) return 1;
    return  root->val*productTree(root->left)*productTree(root->right);
}

int main(){
    Node * a=new Node(1);
    Node * b=new Node(2);
    Node * c=new Node(3);
    Node * d=new Node(4);
    Node * e=new Node(5);
    Node * f=new Node(6);
    Node * g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    displayTree(a);

    cout<<sumTree(a)<<endl;
    cout<<size(a)<<endl;
    cout<<maxTree(a)<<endl;
    cout<<minTree(a)<<endl;
    cout<<levelTree(a)<<endl;
    cout<<productTree(a)<<endl;
}
