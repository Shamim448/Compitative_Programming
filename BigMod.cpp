#include <bits/stdc++.h>
using namespace std;
long long M;
long long getBigMod(long long B, long long P)
{
    if(P == 0) return 1;
    if(P % 2 == 0)
    {
        long long half = getBigMod(B, P/2);
        return (half*half) % M;
    }
    return (B * getBigMod(B, P-1))% M;
}
int main()
{
    long long b, p;
    while(cin >> b >> p >> M)
    {
        cout << getBigMod(b, p) << endl;
    }
    return 0;
}
