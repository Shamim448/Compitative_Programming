#include <bits/stdc++.h>
using namespace std;
#define BASE 10
#define MAX_S 10005
long long h[MAX_S], po[MAX_S];
void generatePrefixHash(string &s)
{
    h[0] = s[0] - 'a' + 1;
    for(int i = 1; i < s.size(); i++)
    {
        h[i] = h[i - 1] * BASE + s[i] - 'a' + 1;
    }
    po[0] = 1;
}
long long generateHash(string &s2){
    long long hashValue = 0;
    for(auto c : s2){
        hashValue = hashValue * BASE + c - 'a' + 1;
    }
    return hashValue;
}

int main()
{
    string s;
    cin >> s;
    generatePrefixHash(s);
    cout << generateHash(s);
    main();

    return 0;
}
