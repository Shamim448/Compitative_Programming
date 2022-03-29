#include <bits/stdc++.h>
using namespace std;
int find_first_even_number(vector<int> &arr)
{
    int L=0, R = arr.size();
///0000[0]01111
    while(L<R)
    {
        int M = L+(R-L)/2;
        if(arr[M] % 2 == 0)
            L = M + 1;
        else
            R = M;
        }
    return L;
}

int main()
{
    vector<int> arr = {10,44,36,88,50,33,21,27,59,101};
    cout << find_first_even_number(arr);
    return 0;
}
