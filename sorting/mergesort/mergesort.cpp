#include<iostream>
#include<vector>
using namespace std;
int c=0;
void merge(vector<int>& a,vector<int>& b,vector<int>& full){
    int i=0;
    int j=0;
    int k=0;
    int n1=a.size();
    int n2=b.size();
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            full[k++]= a[i++];
        }
        else {
            full[k++]=b[j++];
        }
    }
    if(i==n1){
        while(j<n2){
            full[k++]=b[j++];
        }
    }
    if(j==n2){
        while(i<n1){
            full[k++]=a[i++];
        }
    }
}
int reversepairs(vector<int>& a,vector<int>& b){
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>(2*b[j])){
            c+=a.size()-i;
            j++;
        }
        else i++;
    }
}
void mergesort(vector<int>& v){
    if(v.size()==1) return;
    int n=v.size();
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    int j=n1;
    for(int i=0;i<n2;i++){
        b[i]=v[j];
        j++;
    }
    mergesort(a);
    mergesort(b);
    c+=reversepairs(a,b);
    merge(a,b,v);
}
int main(){
    vector<int> v={2,4,3,5,1};
    int n=v.size();
    mergesort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<c;
}