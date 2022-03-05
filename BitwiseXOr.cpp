///if 2 bit is same(0 or 1) then result 0
/// if 2 bit is different one to another then 1
/// 1010, 0100
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 10, b = 4, c;
    c = a^b;
    cout << "Output: "<< c;
    return 0;
}
