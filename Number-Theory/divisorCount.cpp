#include <bits/stdc++.h>
using namespace std;
const int MAX = 10000000;
vector<int>divs[MAX+5];
void divisorGenerator(long long N){
for(int i = 1; i <= N; i++){ // i=1  n=10
    for(int j = i; j <= N; j+=i){ //j = 1
        if(j % i == 0){
            divs[j].push_back(i);
        }
    }
}
}
int main(){
divisorGenerator(20);
for(auto it:divs[12]){
    cout << it << " ";
}
    return 0;
}
