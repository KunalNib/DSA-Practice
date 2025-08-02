#include<iostream>
#include<stack>
using namespace std;

void printSt(stack<int> st){
    stack<int> temp;
    while(st.size()){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
//Push at Bottom
void pushATBt(stack<int> & st,int val){
    stack<int> temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
}

//push at Any Index
void pushATIndex(stack<int> & st,int val,int idx){
    stack<int> temp;
    int stkSize=st.size();
    for(int i=1;i<=stkSize-idx;i++){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
}
//Display stack using recursion
void displayRec(stack<int>& st){
    if(st.size()==0){
        cout<<endl; 
        return;}
    int x=st.top();
    // cout<<x<<" "; //for printing in reverse
    st.pop();
    displayRec(st);
    cout<<x<<" ";
    st.push(x);
    
}

void pushAtBtRec(stack<int>& st,int val){
    if(st.size()==0){
        st.push(val);
        return;}
    int x=st.top();

    st.pop();
    pushAtBtRec(st,val);
    st.push(x);
    
}

void ReverseRecSt(stack<int>& st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    ReverseRecSt(st);
    pushAtBtRec(st,x);
}



int main(){
    stack<int> st;
    st.push(18);
    st.push(17);
    st.push(16);
    st.push(15);
    st.push(14);
    st.push(13);
    st.push(12);

    printSt(st);
    pushATBt(st,19);
    printSt(st);
    pushATIndex(st,35,2);
    printSt(st);
    // displayRec(st);
    pushAtBtRec(st,20);
    printSt(st);
    ReverseRecSt(st);
    printSt(st);
}