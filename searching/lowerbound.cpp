#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,9,15,18,21};
    int t=20;
    int low=0;
    bool flag=false;
    int high=v.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==t){ cout<<v[mid];
        flag=true;
        break;}
        else if(v[mid]<t){
            low=mid+1;
        }
        else high=mid-1;
        
    }
    if(flag==false){
            cout<<v[high];
        }

}