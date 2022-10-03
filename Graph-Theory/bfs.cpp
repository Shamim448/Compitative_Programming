#include <bits/stdc++.h>
using namespace std;
const int MAX = 100000;
vector <int> gr[MAX + 5];
vector <int> dist;
void

int main(){
    int node, edge, a, b;
    scanf("%d %d", &node, &edge);
    for(int i = 1; i <= node; i++){
        scanf("%d %d", &a, &b);
        gr[a].push_back(b);
        gr[b].push_back(a);
    }
    return 0;
}
