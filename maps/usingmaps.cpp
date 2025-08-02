#include <iostream>
#include<map>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 1, 3, 2, 1};

    int query;
    cin >> query;

    map<int, int> mpp;

    for (int i = 0; i < 6; i++)
    {
        mpp[arr[i]]++;
    }
    cout<<mpp[query];
}