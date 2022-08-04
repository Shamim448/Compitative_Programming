/* Step of code
1.Generate prefix hash o string s1 a=1 -->ab= 12 --> abc= 123 --> abcc= 1233 where base = 10
2.Generate Hash Value of s2
3.calculate all power in po array depend on base p[x] = p[x-1] * BASE
4.create a function to calculate substring hash value like generate hash s[L, R] --> s="abccdabc"--> hash(0, 2) == abc
*/

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
        po[0] = 1;
        for(int i = 1; i < s.size(); i++)
        {
            po[i] = po[i - 1] * BASE; /// p[x] = p[x-1] * BASE
        }
    }
}
long long generateHash(string &s2)
{
    long long hashValue = 0;
    for(auto c : s2)
    {
        hashValue = hashValue * BASE + c - 'a' + 1;
    }
    return hashValue;
}
long long getHash(int L, int R)  ///generate hash s[L, R] --> s="abccdabc"--> hash(0, 2) == abc
{
    if (L == 0) return h[R];
    return (h[R] - (h[L-1] * po[R - L + 1]) );  ///h[R] prefix - h[L-1] ar prefix * BASE ^ (R - L +1) substr size
}

int main()
{
    string s;
    string s2;
    cin >> s >> s2;
    generatePrefixHash(s);
   long long hashOfS2 = generateHash(s2);
   for(int i = 0; i < s.size(); i++){
    if(getHash(i, i + s2.size() - 1) == hashOfS2){
        cout << i << "\n";
    }
   }
    main();

    return 0;
}
