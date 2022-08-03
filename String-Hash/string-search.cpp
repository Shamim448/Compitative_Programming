#include <bits/stdc++.h>
using namespace std;
#define BASE 26
#define MAX_S 10000
long long h[MAX_S];
void generatePrefixHash(string &s){
    h[0] = s[0] - 'a' + 1;
    for(int i = 1; i < s.size(); i++){
        h[i] = h[i - 1] * BASE + s[i] - 'a' + 1;
    }
    for(int i = 0; i < s.size(); i++){
        cout << h[i] << "\n";
    }


}
int main(){
    string s;
    cin >> s;
    generatePrefixHash(s);
    main();

    return 0;
}
