#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
bool composite[MAX + 5];
void sieveOfEratosthenes(long long n)
{
    composite[1] = true;
    for(int i = 2; 1LL * i * i <= n; i++)   ///O(N log2(log2(n))
    {
        if(composite[i] == false) /// if i is prime
        {
            for(int j = i * i; j <= n; j += i)
            {
                composite[j] = true;
            }
        }
    }
}

int main ()
{

    int T;
    cin >> T;
    while(T--)
    {
        long long n;
        cin >> n;
        long long sN = sqrtl(n);
        sieveOfEratosthenes(sN);
        if(sN * sN == n && composite[sN]== false)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

