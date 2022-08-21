#include <bits/stdc++.h>
using namespace std;
int getGCD(int a, int b){
if(a == 0) return b;
return getGCD(b%a, a);
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << getGCD(a, b) << "\n";
    main();
    return 0;
}
