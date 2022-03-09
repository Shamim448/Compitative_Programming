#include <bits/stdc++.h>
using namespace std;

int main()
{
    string T, P;
    cin >> T >> P;
    int size = T.size() - P.size() + 1;
    for (int i = 0; i < size; ++i)
    {
        i = T.find(P, i);
        if (i != -1)
        {
            printf("%d\n", i);
        }
        else if(i == -1)
        {
            break;
        }
    }

    return 0;
}
