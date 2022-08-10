/*
1. Define string and reverse string.
2. Generate Prefix Hash for main string and reverse string
3. Calculate Hash value for specific range
4. calculate base to the power something for help step 3(calculate hash value)
5. Check exists palindrome in specific range
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
        po[i] = (po[i - 1] * BASE) % MOD;
    }
    return po;
}
///step 3
long long getRangHash(int L, int R, vector<long long>&prefixHashValue, vector<long long> &po )
{
    if(!L) return prefixHashValue[R];
    return (prefixHashValue[R] - (prefixHashValue[L - 1] * po[R-L+1] % MOD) + MOD) % MOD;
}
///step-5
bool existsPalindrome( int len, vector<long long>&stringPrefixHash, vector<long long>&ReverseStringPrefixHash, vector<long long> &po)
{
    int N = stringPrefixHash.size();
    int L1, R1, L2, R2;
    for(int i = 0; i+len <= stringPrefixHash.size(); i++ )
    {
        L1 = i;
        R1 = i + len - 1; ///[0,1,2,3,4,5]
        R2 = N - 1 - L1;
        L2 = R2 - R1 + L1;
        if(getRangHash(L1, R1, stringPrefixHash, po) == getRangHash(L2, R2, ReverseStringPrefixHash, po))
        {
            return true;
        }
    }

    return false;
}

int main()
{
    string s, rs;
    cin >> s;
    int N = s.size();
    rs = s;
    reverse(rs.begin(), rs.end());

    auto stringPrefixHash = generatePrefixHash(s);
    auto ReverseStringPrefixHash = generatePrefixHash(rs);
    auto po = getBaseToThePower(s.size());
/*
    int L = 0;
    int R = N ;
    while (L < R){
        int MID = (L + R + 1) / 2;
        if(existsPalindrome(MID,stringPrefixHash,ReverseStringPrefixHash,po) < 1){
            R = MID - 1;
        }else{
        L = MID;
        }
    }
    cout << R << " " << L;
    return 0;

    for(int L = 0 ; L <= N; L+=2 )
    {*/
        cout << existsPalindrome(7,stringPrefixHash,ReverseStringPrefixHash,po) << "\n";
   // }
   main();
    return 0;
}
