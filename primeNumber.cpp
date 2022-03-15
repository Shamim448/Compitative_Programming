#include <bits/stdc++.h>
using namespace std;
///prime number check
bool isPrime( int n)
{
    for(int i = 2; i < n; i++ )
    {
        if(n % i == 0)
        return false;
    }
    if(n < 2)
        return false;
    else
        return true;
}




int main()
{
    int n;
    cin >> n;
    bool primNumber = isPrime(n);
    cout << primNumber << endl;
    main();
}
