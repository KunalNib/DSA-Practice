#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the vector :";
    cin>>n;
    vector<int> v;
    cout<<"enter the zero and one's elements :";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    cout<<endl;
    int i=0,j=n-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        // if(i>j) break; 
        /* or */else if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
        }

    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
}