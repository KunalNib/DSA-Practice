#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int helper(int n,vector<int>& dp){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    int x=n;
    int steps=INT_MAX;
    while(x>0){
        int curr=x%10;
        if(curr !=0){
            steps=min(steps,1+helper(n-curr,dp));
        }
        x=x/10;
    }
    return dp[n]=steps;
}


int minSteps(int n){
    vector<int> dp(n+1,-1);
    return helper(n,dp);
}

int main(){
    int n;
    cin>>n;
    int ans=minSteps(n);
    cout<<ans;
}