#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v,int n){
    int noz=0,noo=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
    }
    for(int i=0;i<n;i++){
        if(i<noz){
            v[i]=0;
        }
        else v[i]=1;
    }
}
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
    sort(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i];
    }

}