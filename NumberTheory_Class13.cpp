#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long N){
if(N < 2) return false;
for(int i = 2; 1LL * i * i <= N; i++){   //i=sqrt(N) or i*i = N
    if(N % i == 0)
        return false;
}
return true;
}
int main(){
    for(int i =1; i < 100; i++){
        if(isPrime(i)){
          cout << i <<endl;
        }
    }
    cout << isPrime(1000000007);

return 0;
}
