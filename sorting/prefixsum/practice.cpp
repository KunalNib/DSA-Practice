#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
int bestClosingTime(string s) {
        int n=s.size();
        vector<int> pre(n);//no. of 'N' befeor i;
        vector<int> suf(n);// no. of 'Y' from i;
        int count=0;
        pre[0]=0;
        for(int i=1;i<n;i++){
            if(s[i-1]=='N') count++;
            pre[i]=count;
        }
        count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='Y') count++;
            suf[i]=count;
            pre[i]+=suf[i];
        }
        
}
int main(){
    string s="YYNY";
    cout<<bestClosingTime(s);
}