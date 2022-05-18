
#include<bits/stdc++.h>
using namespace std;
bool Prime(int N)
{
    if(N < 2) return false;
    for(int i = 2; i * i <= N; i++)
    {
        if(N % i == 0 )
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int a_prime = 0;
    for(int i = 1; i <= n; i++)
    {
        int counts = 0;
        for(int j = 2; j < i; j++)
        {
            if(Prime(j))
            {
                if(i % j == 0)
                {
                    counts ++;
                }

            }
        }
        if(counts == 2)
        {
            a_prime++;
        }
    }
    cout << a_prime << endl;
    return 0;
}
