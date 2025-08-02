#include<iostream>
#include<vector>
using namespace std;
void printarray(vector<int>& v,int n){
    if(n==v.size()) return;
    cout<<v[n];
    printarray(v,n+1);

}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    printarray(v,0);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}