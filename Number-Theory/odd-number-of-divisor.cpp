/**
Vjudge: https://vjudge.net/contest/510298#problem/C
Given a positive odd integer K and two positive integers low and high,
determine how many integers between low and high contain exactly K divisors.
Test Case: 0~100,000, K, low, and high (1 < K < 10000, 0 < low ≤ high < 10^10)
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX = 500;
int divs[MAX+5];
void divisorCount(int n)
{
    for(int i = 1;  i <= n; i++)
    {
        for(int j =  i; j <= n; j += i){
            divs[j]++;
        }
    }
}
int main()
{
    divisorCount(MAX);
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int k, low, high;
        scanf("%d %d %d", &k, &low, &high);
        int cnt = 0;
        for(int i = low; i <= high; i++)
        {
            if(divs[i] == k)
            {
                cnt++;
            }
        }
        printf("%d \n", cnt);
    }
    return 0;
}
