#include <bits/stdc++.h>
using namespace std;
bool isValidBracketSeq(string &s){
    stack <char> stk;
    for(auto c:s){
        if(c == '('){
            stk.push(c);
           }
        else{ /// c= ")"
            if(!stk.empty()) stk.pop();
            else return false;
        }
    }
    return stk.empty();
}
int main(){
    string s;
    cin >> s;
    if(isValidBracketSeq(s)){
        printf("%s\n", "Valid");
    }
    else printf("%s\n", "Invalid");
    main();
    return 0;
}
