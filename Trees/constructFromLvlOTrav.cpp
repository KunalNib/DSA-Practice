#include<iostream>
#include<queue>
#include<climits>
using namespace std;

class Node{
    public:
    int val;
    Node * left;
    Node * right;

    Node(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};

Node * ConstructTree(vector<int>& arr){
    queue<int> q;
    int n=arr.size();
    Node * root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<arr.size()){
        Node * temp=q.front();
        q.pop();
        Node * l=((arr[i]==INT_MIN)? NULL: new Node(arr[i]));
        Node * r=((arr[j]==INT_MIN)? NULL: new Node(arr[j]););
        if(i<n)temp->left=l;
        if(j<=n)temp->right=r;
        i+=2;
        j+=2;
    }
    return root;
}

void levelOrder(Node * root){
    queue<int> q;
    q.push(root->val);
    while(q.size()>0){
        Node * temp=
    }
}

int main(){
    vector<int> arr={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN};
    Node * root=ConstructTree(arr);

}