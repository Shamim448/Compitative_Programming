#include <bits/stdc++.h>
using namespace std;

bool checkBit(int n, int p)
{
    int exp = 1 << p;
    return (n & exp) == exp;
}
int main()
{
    int v = 13;
    for(int i = 7; i >= 0; i--){
        cout << checkBit(v, i);
    }
    return 0;
}
