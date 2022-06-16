#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr)
{
    int j;
    for(int i = 1; i < arr.size(); i++)
    {
        j = i-1;
        while( j >= 0 & (arr[j] > arr[i]))
        {
            swap(arr[j], arr[i]);
            j--;
            i--;
        }
    }
}
/// for print array
void printArray(vector<int> &arr)
{
    for(auto it : arr)
    {
        cout << it << " ";
    }
    printf("\n");
}

int main()
{
    vector<int> arr = {8556,995,55,6598,15,64,5,44,959,2,4,65,99,15};
    printArray(arr);
    insertionSort(arr);
    printArray(arr);
    return 0;
}

