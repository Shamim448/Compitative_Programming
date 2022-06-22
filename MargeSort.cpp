#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &vec)
{
    for(auto it : vec)
    {
        cout << it << " " ;
    }
}

void merge(vector<int> &vec, int mid, int low, int high){
vector<int> vecB;
    int i, j;
    i = low;
    j = mid + 1;


    while (i <= mid && j <= high)
    {
        if (vec[i] < vec[j])
        {
             vecB.push_back(vec[i]);
            i++;
        }
        else
        {
            vecB.push_back(vec[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        vecB.push_back(vec[i]);
        i++;
    }
    while (j <= high)
    {
        vecB.push_back(vec[j]);
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        vec[i] = vecB[i];
    }

}

void mergeSort(vector<int> &vec, int low, int high){
    int mid;
    if(low<high){
        mid = (low + high) /2;
        mergeSort(vec, low, mid);
        mergeSort(vec, mid+1, high);
        merge(vec, mid, low, high);
    }
}

int main()
{
    vector<int> vec ={9, 1, 4, 14, 4, 15, 6 };
    // int A[] = {9, 14, 4, 8, 7, 5, 6};
    int n = vec.size();

    printArray(vec);
    mergeSort(vec, 0, n);
    cout << endl;
    printArray(vec);
    return 0;
}
