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


void printNthLvl(Node * root,int currLvl,int tarLvl){
    if(root==NULL) return;
    if(currLvl==tarLvl){
        cout<<root->val<<" "; 
        return;
    }
    printNthLvl(root->left,currLvl+1,tarLvl);
    printNthLvl(root->right,currLvl+1,tarLvl);
}

void nthLvlRev(Node * root,int currLvl,int tarLvl){
    if(root==NULL) return;
    if(currLvl==tarLvl){
        cout<<root->val<<" "; 
        return;
    }
    printNthLvl(root->right,currLvl+1,tarLvl);
    printNthLvl(root->left,currLvl+1,tarLvl);
}
int levelTree(Node* root){
    if(root==NULL) return 0;
    return 1+max(levelTree(root->left),levelTree(root->right));
}

void levelTraversal(Node * root){
    if(root==NULL) return;
    int lvl=levelTree(root);
    for(int i=1;i<=lvl;i++){
        printNthLvl(root,1,i);
        // nthLvlRev(root,1,i);
        cout<<endl;
    }
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
    int currLvl=1;
    int tarLvl=3;
    // displayTree(a);
    // printNthLvl(a,currLvl,tarLvl);
    levelTraversal(a);

}