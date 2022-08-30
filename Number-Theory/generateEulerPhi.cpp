#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000005;
int phi[MAX + 5];
void generatePhi(int n)
{
///set n into phi
    for(int i = 1; i <= n; i++)
    {
        phi[i] = i;
    }
///calculate actual value of phi
    for(int i = 2; i <= n; i++)
    {
        /// check i is prime or not (touch base)
        if(phi[i] == i)  //untouch value is prime
        {
            for(int j = i; j <= n; j += i)
            {
                phi[j] /= i;
                phi[j] *= i-1;
            }
        }
    }
    //check generate phi
    for(int i = 1; i <= n; i++){
        cout << i << " : " << phi[i] << "\n";
    }
}
int main()
{
generatePhi(20);
    return 0;
}
