#include <bits/stdc++.h>
using namespace std;
///Find a value in array
bool does_exists( vector <int>&arra, int elem){
    int L = 0;
    int R = arra.size() - 1;
    while(L <= R){
        int M = L + (R-L)/2;
        if(arra[M] == elem) return true;
        if(arra[M] > elem ) R = M-1;

        else L = M+1;
    }
    return false;
}

int main(){
    vector <int> arra = {1,2,3,4,6,10,25,26,38,100};
  // for( auto v: arra)
    cout << does_exists(arra, 4);

return 0;
}
