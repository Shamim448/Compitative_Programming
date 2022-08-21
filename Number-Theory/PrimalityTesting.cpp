#include <bits/stdc++.h>
using namespace std;
int getDivisorCountOfANumber(long long N)
{
    int cnt = 0;
    for(int i = 1; i * i <= N; i++)
    {
        if(N % i == 0)
        {
            cnt++;
            if(i * i != N)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
bool isPrimary(long long N)
{
    int divisor_count = getDivisorCountOfANumber(N);
    if(divisor_count == 2) return true;
    else return false;
}
int main()
{
    int n;
    cin >> n;
    if(isPrimary)
    {
        cout << n << " is a prime number" << "\n";
    }
    else
        cout << n << " is not a prime number" << "\n";
    main();
    return 0;
}
