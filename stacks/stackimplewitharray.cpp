#include<iostream>
using namespace std;


//user defined data structure using array
class Stack{
    int arr[5];
    int idx;

    public:

    Stack(){
        this->idx=-1;
    }

    void push(int val){
        if(idx==(sizeof(arr)/sizeof(arr[0])-1)){
            cout<<"stack is full"<<endl;
            return;
        }
        arr[++idx]=val;
    }

    void pop(){
        if(idx==-1){
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack is Empty!"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.pop();
    cout<<st.top()<<endl;
    st.push(10);
    st.push(11);
    st.push(12);
    st.push(12);
    st.push(13);
    st.push(14);
    st.pop();
    st.display();
    cout<<st.top()<<endl;;
    cout<<st.size();
}