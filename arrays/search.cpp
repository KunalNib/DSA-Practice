#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int search[n];
    for(int i=0;i<=n-1;i++){
        cin>>search[i];
    }
    int x;
    cout<<"enter element you want to search";
    cin>>x;
    bool flag=false;
    int index;
    for(int i=0;i<=n-1;i++){
        if(search[i]==x){
            flag=true;
            index=i;
            break;
        }
    }
    if(flag=true){
        cout<<"element is present at index"<<" "<<index;
    }
    else{
        cout<<"element not found";
    }
}