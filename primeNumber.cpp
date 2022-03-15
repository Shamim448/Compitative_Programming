#include <bits/stdc++.h>
using namespace std;
vector <int> primeNumber;
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

/// Prime number generator
void primeNumberGenerator(int L, int R)
{
    for(int i = L; i <= R; i++)
    {
        if(isPrime(i))
        {
            primeNumber.push_back(i);
        }
    }

}


int main()
{
    int L, R;
    cin >> L >> R;
    primeNumberGenerator(L, R);
    for(auto prime: primeNumber){
        cout << prime << endl;
    }

    /*int n;
    cin >> n;
    bool primNumber = isPrime(n);
    cout << primNumber << endl;
    main();*/
}
