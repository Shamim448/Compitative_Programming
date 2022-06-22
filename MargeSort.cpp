#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &vec)
{
    for(auto v : vec)
    {
        cout << v << " " ;
    }
    cout << endl;
}
///marge two array
void margeArray(vector <int> &vec, int L, int M, int R )
{
    vector <int> tempArray;
    int leftArray = L;
    int rightArray = M+1;
    while(leftArray <= M && rightArray <= R)
    {
        if(vec[leftArray] <= vec[rightArray])
        {
            tempArray.push_back(vec[leftArray]);
            leftArray++;
        }
        else
        {
            tempArray.push_back(vec[rightArray]);
            rightArray++;
        }
    }
    ///for leftArray incomplete arry
    while(leftArray <= M)
    {
        tempArray.push_back(vec[leftArray]);
        leftArray++;
    }
     ///for right Array incomplete arry
    while(rightArray <= R)
    {
        tempArray.push_back(vec[rightArray]);
        rightArray++;
    }
    for(int i = L; i <= R; i++){
        vec[i] = tempArray[i - L];
    }
}

///Recursive Marge sort
void margeSort(vector <int> &vec, int L, int R)
{
    if(L >= R) return;
    int mid = (L + R) / 2;
    margeSort(vec, L, mid);
    margeSort(vec, mid+1, R);
    margeArray(vec, L, mid, R);
}

int main()
{
    vector <int> vec = {12, 5, 9, 14, 3, 6, -1, 7, 0, 5};
    printArray(vec);
    margeSort(vec, 0, vec.size()-1);
    printArray(vec);
    return 0;
}


