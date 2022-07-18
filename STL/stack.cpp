#include <bits/stdc++.h>
using namespace std;

int main(){
     stack <vector<int>> st;
     st.push({1,2,3});
     st.push({4,5,6});
     st.push({7,8,9});
    auto vc = st.top();
    for(auto it:vc)
        cout << it << " ";
    st.push({17,78,59});
    auto vec = st.top();
    cout <<"\n"<< vec[0] <<"\n";
    for(auto it:vec)
        cout << it << " ";
    return 0;
}
