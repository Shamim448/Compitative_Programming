#include <bits/stdc++.h>
using namespace std;
int div_count[1010];
int divisorCalculator(int n)
{
    int counts = 1;
    for(int i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            counts++;
        }
    }
    return counts;
}
///use if calculate using bubble sort
/*bool isGatter(int x, int y)///x > y -> true, false
{
    int div_count_x = divisorCalculator(x);
    int div_count_y = divisorCalculator(y);
    if(div_count_x > div_count_y) return true;
    if(div_count_x < div_count_y) return false;
    if(x > y)return false;
    return true;
}*/

bool isSmaller(int x, int y)///x < y -> true, false
{
    int div_count_x = divisorCalculator(x);
    int div_count_y = divisorCalculator(y);
    if(div_count_x > div_count_y) return false;
    if(div_count_x < div_count_y) return true;
    if(x > y)return true;
    return false;
}
///no need to use if build in sort() we used
/*
void bubble_sort(vector <int> &numbers)
{
    for(int i = 0; i < numbers.size(); i++)
    {
        for(int j = i+1; j < numbers.size(); j++ )
        {
            if(isGatter(numbers[i], numbers[j]))
            {
                swap(numbers[i], numbers[j]);
            }
        }
    }
}*/

int main()
{
    vector <int> numbers;
    for(int i = 1; i <= 1000; i++)
    {
        numbers.push_back(i);
        div_count[i] = divisorCalculator(i);
    }
    //bubble_sort(numbers);
    sort(numbers.begin(), numbers.end(), isSmaller);
    int T, cs = 1;
    cin >> T;
    while(T--)
    {
        int pos;
        scanf("%d", &pos);

        printf("Case %d: %d\n", cs++, numbers[pos - 1]);
    }


}
