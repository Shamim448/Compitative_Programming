#include <bits/stdc++.h>
using namespace std;

int main(){
    queue <string> str;
    str.push("Shamim");
    str.push("Shohaib");
    str.push("Ahmed");
    cout << str.front() << "\n";
    str.pop();
    cout << str.front() << "\n";
    return 0;
}
