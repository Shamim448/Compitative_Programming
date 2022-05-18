#include<bits/stdc++.h>
using namespace std;
#define MAX 100000000
bool composite[MAX+1];
vector <int> primes;
void prime(int N)
{
    composite[1] = true;
    for( int i = 2;  i * i <= N; i++)
    {
        if( composite[i] == false)
        {
            for ( int j = i*i; j <= N; j+=i)
            {
                composite[j] = true;
            }
        }
    }
}
int main()
{
    prime(MAX);
    for (int i = 2; i <=MAX; i++)
    {
        if(composite[i] == false)
        {
            primes.push_back(i);
        }
    }
    for (int i = 1; i < primes.size(); i += 100) printf(" %d \n", primes[i-1]);
    return 0;
}
