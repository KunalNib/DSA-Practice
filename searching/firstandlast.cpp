#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,2,3,3,3,4,4,4,5};
    int target=4;
    int low=0;
    int high=v.size()-1;
    int first=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if(v[mid]<target) low=mid+1;
        else high=mid-1;
    }
    cout<<first<<" ";
    low=0;
    high=v.size()-1;
    int last=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(v[mid]<target) low=mid+1;
        else high=mid-1;
    }
    cout<<last;


}