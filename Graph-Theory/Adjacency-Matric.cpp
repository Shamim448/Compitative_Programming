#include <bits/stdc++.h>
using namespace std;
int gr[100][100];
int main(){
    int node, edge;
    scanf("%d %d", &node,&edge);
    ///adjacent nod connection undirected grapg
    for(int i = 1; i <= edge; i++){
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        gr[n1][n2] = 1;
        gr[n2][n1] = 1;
    }
    ///print matrix
    for(int i = 1; i <= node; i++){
        for(int j = 1; j <= node; j++){
            printf("%d \t", gr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
input: 5 6
1 2
1 3
1 4
2 4
3 4
3 5
*/
