#include<bits/stdc++.h>
using namespace std;
unordered_set<long long int> uglyNumbers;
void generateUglyNumbers(long long int n = 1)
{
    if(n > 1e9) return;
    if(uglyNumbers.count(n) > 0 ) return;
    uglyNumbers.insert(n);
    generateUglyNumbers(2 * n);
    generateUglyNumbers(3 * n);
    generateUglyNumbers(5 * n);
}
int main()
{
    generateUglyNumbers();
    vector <long long int > numbers(uglyNumbers.begin(), uglyNumbers.end());
   sort(numbers.begin(), numbers.end());
   int K = 1500;

    cout << "The 1500'th ugly number is "<< numbers[K-1] << "." << endl;
    return 0;
}
