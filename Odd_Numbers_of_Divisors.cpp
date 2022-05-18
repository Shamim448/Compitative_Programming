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
            if(N/i != i)
            {
                counts+=1;
            }
        }

    }
    return counts;
}
int main()
{


    int T;
    cin>> T;
    while(T--)
    {
        long long k,low, high;
        cin>>k>>low>>high;
        vector<long long> arr;
        for(int i= low; i <= high; i++)
        {
            if(divisorCount(i) % 2 != 0)
            {
                arr.push_back(divisorCount(i));
            }
        }
        int j = 1;
        int counts = 0;
        for( auto it:arr)
        {
            if(it == k)
            {
                counts++;
            }
            /// cout << j++ << " = " << it <<endl;
        }
        cout << counts << endl;

    }

    return 0;
}
