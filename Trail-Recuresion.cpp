#include <bits/stdc++.h>
using namespace std;
long long int get_recuresion(int n, int curr=1){
 if(n == 0) return curr;
 return get_recuresion(n-1, n*curr%100);
}
int main(){
cout << get_recuresion(100);
return 0;
}
