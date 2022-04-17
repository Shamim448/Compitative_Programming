#include <bits/stdc++.h>
using namespace std;
int M = 3;
long long getBigMod(long long B, long long P){
if(P == 0) return 1;
if(P % 2 == 0){
    long long half = getBigMod(B, P/2)% M;
    return (half*half) % M;
}
return (B * getBigMod(B, P-1))% M;
}
int main(){

     cout << getBigMod(3, 18132) << endl;


return 0;
}
