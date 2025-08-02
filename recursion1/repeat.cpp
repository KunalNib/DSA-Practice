 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 int singleNumber(vector<int>& v) {
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-2;i++){
            if(v[i]!=v[i+1]){
                return v[i];
            }
            else{
                i++;
            }
        }
        return v[v.size()-1];
    }
int main(){
    vector<int> v={2,1,2,3,1,4,3};
    cout<<singleNumber(v);
}