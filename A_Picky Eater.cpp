#include <bits/stdc++.h>
using namespace std;

int main(){
    int availableAmount, sandwichPrice;
    cin >> availableAmount >> sandwichPrice;
    if(availableAmount >= sandwichPrice){
        cout << 1;
    }else{
        cout << 0;
    }
    return 0;
}
