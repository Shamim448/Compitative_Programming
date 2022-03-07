#include <bits/stdc++.h>
using namespace std;
int main()
{
    int watermelonWeight;
    cin >> watermelonWeight;
    if(watermelonWeight % 2 == 0 && watermelonWeight > 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
