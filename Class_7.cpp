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
    vector <int> arra = {2, 4, 7, 9, 13, 17, 19, 30, 37, 40, 43, 48, 58};
   for( auto v: {2, 4, 5, 6, 17, 30})
    cout << does_exists(arra, v);

return 0;
}
