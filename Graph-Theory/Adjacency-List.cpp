#include <bits/stdc++.h>
using namespace std;
const int MAX = 100000;
vector <int> gr[MAX + 5];
int main(){
    //n = node, e = edge, a & b = undirected connected node
    int n, e, a, b;
    cin >> n >> e;
    //input connected node
    for(int i = 0; i < e; i++){
        cin >> a >> b;
        gr[a].push_back(b);
        gr[b].push_back(a);
    }
    //print graph
    for(int i = 0; i < n; i++){
        cout << i << "= ";
        for(auto v : gr[i]){
            cout << v << " ";
        }
        cout << "\n";
    }
    return 0;
}
