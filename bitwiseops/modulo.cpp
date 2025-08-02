#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=25;
    int mod=1000000007;
    vector<long long int> arr(n+1,1);
    for(int i=2;i<=n;i++){
        arr[i]=((i%mod)*(arr[i-1]%mod))%mod;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}