#include <bits/stdc++.h>
using namespace std;

int main()
{
    string T, P;
    cin >> T >> P;
    int c =0;
    int size = T.size() - P.size() + 1;

    for (int i = 0; i < size; ++i)
    {
        i = T.find(P, i);
        if (i != -1)
        {
            printf("%d\n", i);
            c++;

        }
        else if(i == -1)
        {
            break;
        }
    }
    if(c == 0){
        cout << "The output should be empty.";
    }
    return 0;
}
