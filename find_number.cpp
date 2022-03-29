#include <bits/stdc++.h>
using namespace std;
///Find the number in array
bool does_exists(vector<int> &arr, int item)
{
    int L =0, R=arr.size()-1;
    while(L<=R)
    {
        int M = L+(R-L)/2;
        if(arr[M] == item) return true;
        if(arr[M] > item) R= M;
        else
            L= M+1;
    }
    return false;
}
int main()
{
    vector<int> arr = {1};
    for(auto v : {3}){
     cout << does_exists(arr, v);
    }

    return 0;
}
