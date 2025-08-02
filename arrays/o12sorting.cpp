#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int> &v){
    int low=0;
    int mid=0;
    int high=v.size()-1;
    while(mid<=high){
        if(v[mid]==2){
            swap(v[mid],v[high]);
            high--;
        }
        else if(v[mid]==0){
            swap(v[mid],v[low]);
            mid++;
            low++;
        }
        else if(v[mid]==1){
            mid++;
        }
    }
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort012(v);
    for(int i=0;i<n;i++){
        cout<<v[i];
    }

}