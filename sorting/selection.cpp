#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
        int n;
        cout<<"enter size of array";
        cin>>n;
        cout<<"enter array elements";
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<n;i++){
            cout<<v[i];
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            int mindx=i;
            int min=INT_MAX;
            for(int j=i;j<n;j++){
                if(min>v[j]){
                    min=v[j];
                    mindx=j;
                }
            }
            swap(v[i],v[mindx]);
            for(int j=0;j<n;j++){
            cout<<v[j]<<" ";
        }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
}
