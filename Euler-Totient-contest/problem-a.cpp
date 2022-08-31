/*
In number theory, the totient φ of a positive integer n
is defined to be the number of positive integers
less than or equal to n that are coprime to n.
(1 <= n <= 10^6) || (T <= 20000)
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000005;
int phi[MAX + 5];
void generatePhi(int n)
{
    for(int i = 1; i <= n; i++)
    {
        phi[i] = i;
    }
    for(int i = 2; i <= n; i++)
    {
        if(phi[i] == i)
        {
            for(int j = i; j <= n; j += i)
            {
                phi[j] -=  phi[j] / i;
            }
        }
    }
}
int main()
{
    generatePhi(MAX);

    int T;
    scanf("%d", &T);
    while(T--)
    {
        int n;
        scanf("%d", &n);
        printf("%d \n", phi[n]);
    }

    return 0;
}
