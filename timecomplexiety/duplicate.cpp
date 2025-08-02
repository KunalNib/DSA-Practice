#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[7]={5,3,2,4,1,6,1};
    // vector<int> v(8,0);
    // for(int i=0;i<v.size();i++){
    //     if (v[arr[i]]==0){
    //         v[arr[i]]=1;
    //     }
    //     else if(v[arr[i]]!=0){
    //         cout<<arr[i];
    //         break;
    //     }
    // }
    int size=7;//size of array is n+1
    int n=6; //no of elements except duplicates
    int sum=0;
    for(int i=0;i<7;i++){
        sum+=arr[i];
    }
    cout<<((n*(n+1))/2)<<endl;
    sum=sum-((n*(n+1))/2);
    cout<<sum;
}