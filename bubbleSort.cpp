
///sorting back side
#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int> &vec)
{
    for(auto it : vec)
    {
        cout << it << " " ;
    }
}
void bubbleSort(vector<int> &vec)
{
    int temp;
    int isSorted = 0;
    for(int i = 0; i < vec.size(); i++) //number of pass
    {
        isSorted = 1;
        for( int j = 0; j < vec.size() - i; j++) //comparison of each pass
        {
            if ( vec[j] > vec[j+1])
            {
                temp        = vec[j];
                vec[j]      = vec[j+1];
                vec[j+1]    = temp;
                isSorted = 0;
            }
        }
        if(isSorted)
        {
            return;
        }
    }
}

int main()
{
    vector<int> vec = {12, 54, 65, 7, 23, 9};
    printArray(vec); /// print original array
    bubbleSort(vec);
    cout<<endl;
    printArray(vec);
    return 0;
}
