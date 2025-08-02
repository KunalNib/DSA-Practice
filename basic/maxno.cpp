#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    vector<string> v={"1234","123","0234","2310","1000","0011"};
    int max=0;
    for(int i=0;i<v.size();i++){
        int x=stoi(v[i]);
        if(x>max){
            max=x;
        }
    }
    string s=to_string(max);
    cout<<s;
    
    

}