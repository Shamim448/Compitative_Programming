///phi(n) = n/i(i-1) where i is prime

#include<bits/stdc++.h>
using namespace std;
#define MAX (1000000)
int phi[MAX+5];
void seiveForPhi(int n){
for(int i = 1; i <= n; i++)
    phi[i] = i;
for(int i = 2; i <= n; i++){
    if(phi[i] == i){ ///i is prime
        for(int j = i; j <= n; j += i){
            phi[j] /= i;
            phi[j] *= (i-1);
        }
    }
}
}
int main(){
    seiveForPhi(30);
    for(int i=1; i  <= 30; i++)
        cout << i << " = " << phi[i] << "\n";
}
