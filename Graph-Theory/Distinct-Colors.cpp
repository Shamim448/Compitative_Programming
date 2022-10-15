#include <bits/stdc++.h>
using namespace std;
int const MAX = 200005;
int val[MAX + 5];
vector <int> gr[MAX +5];
bool vist[MAX +5];
set <int> UnqClr[MAX +5];
void dfs(int n){
}
int main(){
int n;
scanf("%d", &n);
// input nodes
for(int i = 1; i <= n; i++){
    scanf("%d", &val[i]);
}
//input edges
for(int i = 1; i <= n-1; i++){
    int a, b;
    scanf("%d %d", &a, &b);
    gr[a].push_back(b);
    gr[b].push_back(a);
}
dfs(1);
for(int i = 1; i <= n; i++){
    cout << UnqClr[i].size();
}
    return 0;
}
