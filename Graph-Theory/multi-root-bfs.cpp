/*Calculate shorter distance by two root */
#include <bits/stdc++.h>
using namespace std;
int const MAX = 100000;
vector <int> gr[MAX + 5];
vector <int> dist;
void bfs(vector<int> src, int n)
{
    dist.clear();
    dist.resize(n + 1, INT_MAX/2);
    queue <int> q;
    for(auto srcs : src)
    {
        q.push(srcs);
        dist[srcs] = 0;
    }
    while(!q.empty())
    {
        auto u = q.front();
        q.pop();
        for( auto v : gr[u])
        {
            if(dist[v] == INT_MAX/2)
            {
                dist[v] = dist[u] + 1;
                q.push(v);
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
    bfs({1,7}, node);
    for(int i = 1; i <= node; i++)
    {
        cout << "Dist :" << i << " " << dist[i] << "\n";
    }
    return 0;
}
//******Input********
/*
10 13
1 2
1 3
1 4
1 7
2 5
2 6
3 6
3 10
7 10
7 4
4 8
8 9
7 9
*/
