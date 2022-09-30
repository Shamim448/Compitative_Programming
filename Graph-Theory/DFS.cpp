#include <bits/stdc++.h>
using namespace std;
const int MAX = 100000;
vector<int> gr[MAX + 5];
bool vis[MAX + 5];
void bfs(int u){
    vis[u] = 1;
    cout << "Visited: " << u << "\n";
    getchar();
    for(auto v: gr[u]){
        if(!vis[v]){
            bfs(v);
            cout << "completed: " << v << "\n";
            getchar();
        }
    }
}

int main(){
    int node, edge, a, b; ///a, b is adjacent node
    scanf("%d %d", &node, &edge);
    for (int i = 0; i < edge; i++){
        scanf("%d %d", &a, &b);
        gr[a].push_back(b);
        gr[b].push_back(a);
    }
    bfs(1);
    getchar();

    return 0;
}
