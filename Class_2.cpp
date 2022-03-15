#include <bits/stdc++.h>
using namespace std;
 int main(){
     ///int c = 2147483649;

     /*char username[6];
     username[0] = 'S';
     username[1] = 'h';
     username[2] = 'a';
     username[3] = 'm';
     username[4] = 'i';
     username[5] = 'm';
     username[6] = 0;

     char nickname[] = {'S','h','o','h','a','i','b', 0}; */

     vector <int> vec;
     vec.push_back(2);
     vec.push_back(9);
     vec.push_back(-2);
     vec.push_back(7);
     vec.push_back(-3);
     vec.push_back(5);

     sort(vec.begin(), vec.end());
     for(int i =0; i< vec.size(); i++){
        cout << vec[i] <<endl;
     }
    return 0;
 }


