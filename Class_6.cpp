#include <bits/stdc++.h>
using namespace std;
long long get_summetion( int n)
{
    long long sum;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << get_summetion(n);
}
