#include <bits/stdc++.h>
using namespace std;
vector<int> primeGeneration(long long N)
{
    //TC:
    vector<bool>composite(N+1, false); //initially set o that means all are prime
    vector<int>prime;
    composite[1] = true;
    for(int i = 2; i * i <= N; i++) //O(rootN)
    {
        if(composite[i] == 0) //i is prime
        {
            for(int j = i * i; j <= N; j += i)
            {
                if( j % i == 0)
                    composite[j] = true;
            }
        }
    }
    for(int i = 1; i <= N; i++)
    {
        if(composite[i]==0)
            prime.push_back(i);
    }
    return prime;
}
int main()
{
   auto primes = primeGeneration(100000000);

    return 0;
}
