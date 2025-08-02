#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& arr,int si,int ei){
    //what if i take pivot element as a last element
    //for getting the proper time complexity we should  use last index as pivot
    int pele=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pele)count++;
    }
    int pi=count+si;
    swap(arr[(si+ei)/2],arr[pi]);
    int i=si;
    int j=ei;
    while(i<pi && j>pi){
        if(arr[i]<=pele) i++;
        if(arr[j]>pele) j--;
        else if(arr[i]>pele && arr[j]<=pele){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pi;
}
int quicksort(vector<int>& arr,int si,int ei,int k){
    int pi=partition(arr,si,ei);
    if(arr.size()-pi==k) return arr[pi];
    if(arr.size()-pi>k)quicksort(arr,pi+1,ei,k);
    else quicksort(arr,si,pi-1,k);
}
int main(){
    vector<int> v={3,2,3,1,2,4,5,5,6,7,7,8,2,3,1,1,1,10,11,5,6,2,4,7,8,5,6};
    int k=20;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<quicksort(v,0,v.size()-1,k);
}