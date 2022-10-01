#include <bits/stdc++.h>
using namespace std;
const int MAX = 100000;
vector<int> gr[MAX + 5];
bool vis[MAX + 5];
void DFS(int u)
{
    vis[u] = 1;
    for(auto v : gr[u])
    {
        if(!vis[v])
        {
            DFS(v);
        }
    }
}
int main()
{
    int node, edge, a, b, cnt = 0;
    scanf("%d %d", &node, &edge);
    for(int i = 0; i < edge; i++)
    {
        scanf("%d %d", &a, &b);
        gr[a].push_back(b);
        gr[b].push_back(a);
    }
    //component count
    for(int i = 1; i <= node; i++)
    {
        if(!vis[i])
        {
            cnt++;
            DFS(i);
        }
    }
    cout << cnt << " component of this graph.";
    return 0;
}
