#include <bits/stdc++.h>
using namespace std;
long long getBigMod(long long B, long long P, long long M)
{
    if(P == 0) return 1;
    if(P % 2 == 0)
    {
        long long half = getBigMod(B, P/2, M);
        return (half*half) % M;
    }
    long long x = B%M;
    long long y = getBigMod(B, P-1, M);
    return (x * y )% M;
}
int main()
{
    long long b, p, m;
    cin >> b >> p >> m;
    cout << getBigMod(b, p, m) << endl;
    return 0;
}
