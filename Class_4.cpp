#include <bits/stdc++.h>
using namespace std;

int main()
{
    ///bitwise operation 2^n*x
    int result = 2;
    result = result << 3;
    cout << result << endl;

    int power = 1 << 31;
    cout << power <<endl;
    ///bitwise operation 2^n
    long long int longpower = 1LL << 63;
    cout << longpower <<endl;

    ///n no 2 ar power kina?
    int n = 4;
    int setbit_count = __builtin_popcount(n);
    cout << setbit_count << endl;

    ///Only work perfect power of tow
    for(int i = 1; i <= 10000000; i++)
    {
        bool is_power_of_two = (i & (i-1)) == 0;
        if(is_power_of_two == true)
        {
            cout << i <<endl;
        }
    }

    return 0;
}
