#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a)//instead of a if i write &a it will change the value as  iam passing the address
{
    a[0]=10;
}
int main(){
    int n;
    cout<<"enter the size of vector";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    change(v);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}
