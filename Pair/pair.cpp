// Pair: This is a part of STL containers
// but it's not actually containers

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // initialization
    pair<int, string> p;
    // insert value in pair
    // p = make_pair(2, "Shamim");
    p = {6, "Shohaib"};
    cout << p.first << " " << p.second;
    return 0;
}
