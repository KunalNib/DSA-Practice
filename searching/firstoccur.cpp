#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,2,3,3,3,3,4,4,4,5,5,6,7};
    int t=1;
    int low=0;
    bool flag=false;
    int high=v.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==t){ 
            if(v[mid-1]!=t){
                flag=true;
                cout<<mid;
                break;
            }
            else{
                 high=mid-1;
            }
        }
        else if(v[mid]<t){
            low=mid+1;
        }
        else high=mid-1;
        
    }
    if(flag==false){
            cout<<-1;
        }

}