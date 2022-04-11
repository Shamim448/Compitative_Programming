#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s, int L, int R)
{
    if(L>=R) return true;
    return (s[L]==s[R]) && (isPalindrome(s, L+1, R-1));
}
int main()
{
    string s = "acdea";
    cout << isPalindrome(s, 0, s.size()-1) << endl;
    return 0;
}
