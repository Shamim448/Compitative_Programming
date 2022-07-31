/// Calculate exactly power of two
#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n){
    return (n & (n-1)) == 0;
}
int main(){
    for(int i=1; i< 10000; i++){
            if(isPowerOfTwo(i))
            cout << i << "\n";
    }
    return 0;
}
