#include<iostream>
#include<vector>
using namespace std;
// global variable declaration
//like hell interviewers don't like them but they are best 
int c=0;
void merge(vector<int>& arr,vector<int>& brr,vector<int>& full){
    int i=0,j=0,k=0;
    while(i<arr.size() && j<brr.size()){
        if(arr[i]<brr[j]){
            full[k++]=arr[i++];
        }
        else{
            full[k++]=brr[j++];
        }
    }
    if(i==arr.size()){
        while(j<brr.size()){
            full[k++]=brr[j++];
        }
    }
    if(j==brr.size()){
        while(i<arr.size()){
            full[k++]=arr[i++];
        }
    }
}
int inversion(vector<int>& a,vector<int>& b){
    int i=0;
    int j=0;
    //by local variable
    // int count=0;
    // while(i<a.size() && j<b.size()){
    //     if(a[i]>b[j]){
    //         count+=a.size()-i;
    //         j++;
    //     }
    //     else i++;
    // }
    // return count;
    
    //by global variable
    int count=0;
    while(i<a.size() && j<b.size()){
        
        if(a[i]>b[j]){
            count+=a.size()-i;
            j++;
        }
        else i++;
    }
    return count;
}
int  mergeSort( vector<int> &v){
    int count=0;
    if(v.size()==1) return 0;
    int n=v.size();
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    count+=mergeSort(a);
    count+=mergeSort(b);
    count+=inversion(a,b);
    merge(a,b,v);
    return count;
    }

int main(){
    vector<int> v={1,3,2,3,1};
    cout<<mergeSort(v);
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}