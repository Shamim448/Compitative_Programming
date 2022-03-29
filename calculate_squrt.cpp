#include<bits/stdc++.h>
using namespace std;
double get_sqrt(double n){
double L=0, R = max(1.0, n), M;
while(fabs(L-R) > 1e-6){
    M = L+(R-L)/2.0;
    if(M*M > n)
        R = M;
    else
        L=M;
}
return M;
}
int main()
{
cout << setprecision(6)<< fixed << get_sqrt(10);
    return 0;
}
