/*
1. Define string and reverse string.
2. Generate Prefix Hash for main string and reverse string
3. Calculate Hash value for specific range
4. calculate base to the power something for help step 3(calculate hash value)
*/
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
const int BASE = 129;
//.step 2
vector<long long> generatePrefixHash(string &s)
{
    vector<long long>prefixHashValue(s.size(), 0);
    prefixHashValue[0] = s[0];
    for(int i = 1; i < s.size(); i++)
    {
        prefixHashValue[i] = (prefixHashValue[i - 1] * BASE + s[i]) % MOD;
    }
    return prefixHashValue;
}
///po[i] = (BASE ^ i) % MOD
///Step-4
vector<long long>getBaseToThePower(int N)
{
    vector<long long> po(N +1, 1);
    for(int i = 1; i <= N; i++)
    {
        po[1] = (po[i - 1] * BASE) % MOD;
    }
    return po;
}
///step 3
long long getRangHash(int L, int R, vector<long long>&prefixHashValue, vector<long long> &po  )
{
    if(!L) return prefixHashValue[R];
    return (prefixHashValue[R] - (prefixHashValue[L - 1] * po[R-L+1] % MOD) + MOD) % MOD;
}
int main()
{
    string s, rs;
    cin >> s;
    rs = s;
    reverse(rs.begin(), rs.end());

    auto stringPrefixHash = generatePrefixHash(s);
    auto ReverseStringPrefixHash = generatePrefixHash(rs);
    auto po = getBaseToThePower(s.size());

    return 0;
}
