#include <bits/stdc++.h>
using namespace std;
int main()
{
   int loops, indexs, values;
   vector<int>nums;
   //vector<int>index;
   cin >> loops;

   while(loops--){
    cin >> indexs;
    if(indexs == 2){
        nums.pop_back();
    }else{
        cin >> values;
        if(indexs == 0){
            nums.push_back(values);
        }else{
            cout << nums[values] <<endl;
        }
    }
   }
    return 0;
}

