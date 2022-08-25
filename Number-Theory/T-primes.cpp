//CF Link : https://codeforces.com/problemset/problem/230/B
//Vjudge: https://vjudge.net/contest/510298#problem/B
/*
we'll call a positive integer t Т-prime, if t has exactly three distinct positive divisors.
You are given an array of n positive integers. For each of them determine whether it is Т-prime or not.
Test case n (1e5), value: 1e12
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000000;
bool composite[MAX + 5];
void sieve(long long n)
{
    composite[1] = true;
    for(int i = 2; 1LL * i * i <= n; i++)
    {
        if(composite[i] == false)
        {
            for(int j = i * i; j <= n; j += i)
            {
                composite[j] = true;
            }
        }
    }
}

int main()
{
    sieve(MAX);
    int T;
    cin >> T;
    while(T--)
    {
        long long n;
        cin >> n;
        long long sqrt_of_n = sqrtl(n);
        if(sqrt_of_n * sqrt_of_n == n && composite[sqrt_of_n] == false)
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }
    return 0;
}
