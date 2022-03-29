#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum;
    for(int i=0; i<3; i++)
    {
        int v = abs(rand())%10;
        sum+=v;
    }
    cout << setprecision(10) << fixed << 1.00*sum/3 << endl;
    return 0;
}
