#include <bits/stdc++.h>
using namespace std;
///TC O(n^2)
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i+ s2.size() <= s1.size(); i++){
        if(s1.substr(i, s2.size()) == s2){
            cout << i <<"\n";
        }
    }
    main();
    return 0;
}
