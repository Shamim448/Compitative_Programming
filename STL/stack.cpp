#include <bits/stdc++.h>
using namespace std;

int main(){
     stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << st.top() << "\n";
    cout <<"Stack size: " << st.size() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.push(6);
    st.push(7);
    cout <<"Stack size: " << st.size() << "\n";
    cout << "------------ " << "\n";
  while(!st.empty()){
        cout << st.top() << "\n";
        st.pop();
    }

    return 0;
}
