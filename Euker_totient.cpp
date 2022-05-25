#include<bits/stdc++.h>
using namespace std;
///O(Nlog2N)
int getPhi(int n){
    int cmt = 0;
    for(int i = 1; i <= n; i++){
        if(__gcd(i, n)== 1)
            cmt++;
    }
    return cmt;
}

int main(){
    for(int i = 1; i <= 20; i++){
        cout << i << " = " << getPhi(i) << "\n";
    }
return 0;
}
