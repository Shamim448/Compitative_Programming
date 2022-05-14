#include<bits/stdc++.h>
using namespace std;
int divisorCount(long long N)
{
    if(N == 1) return 1;
    int counts = 0;
    for(int i = 1; i * i <= N; i++)
    {
        if(N % i == 0)
        {
            counts+=1;
            if(N/i != i){
            counts+=1;
        }
        }

    }
    return counts;
}
int main()
{

        for(int i= 2; i <= 49; i++)
        {
            cout << i << " = " << divisorCount(i) << endl;
        }




    return 0;
}
