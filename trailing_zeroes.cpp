#include <bits/stdc++.h>
using namespace std;
//find trailling zeros in factorial numbre
int find_notz(int n)
{
    int counts =0, p = 5;
    int base = p;
    while(n >= base)
    {
        counts+=n/base;
        base*=p;
    }
    return counts;
}
int find_n(int Q)
{
    int L=0, R=1000000000;
    int M;
    while(L < R)
    {
        M = L + (R-L)/2;
        if(find_notz(M) < Q)
        {
            L = M+1;
        }

        else
        {
            R=M;
        }
    }
    if(find_notz(L)!= Q)
    {
        return -1;
    }
    return L;
}

int main()
{
    int T, Q;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &Q);
        int N = find_n(Q);
        printf("Case %d: ", cs++);
        if(N == -1)
        {
            printf("impossible\n");
        }
        else
        {
            printf("%d\n", N);
        }
    }

    return 0;
}
