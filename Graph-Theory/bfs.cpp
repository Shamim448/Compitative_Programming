#include <bits/stdc++.h>
using namespace std;
const int MAX = 100000;
vector <int> gr[MAX + 5];
vector <int> dist;
void bfs( int src, int node)
{
    dist.clear();
    dist.resize(node + 1, INT_MAX/2);
    queue <int> Q;
    Q.push(src);
    dist[src] = 0;
    while(!Q.empty())
    {
        auto u = Q.front();
        Q.pop();
        for(auto v : gr[u])
        {
            if(dist[v] == INT_MAX/2)
            {
                dist[v] = dist[u] + 1;
                Q.push(v);
            }

        }

    }

}

int main()
{
    int node, edge, a, b;
    scanf("%d %d", &node, &edge);
    for(int i = 1; i <= edge; i++)
    {
        scanf("%d %d", &a, &b);
        gr[a].push_back(b);
        gr[b].push_back(a);
    }
    bfs(1, node);
    for(int i = 1; i <= node; i++){
        cout << "Dist :" <<i << " " <<dist[i] << "\n";
    }
    return 0;
}
