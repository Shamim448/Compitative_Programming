#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector <int> &vc)
{
    int cnt = 0;
    for(int i=0; i<vc.size(); i++)
    {
        for(int j = i+1; j<vc.size(); j++)
        {
            if(vc[i] > vc[j])
            {
                ++cnt;///inversion count
                swap(vc[i], vc[j]);
            }
        }
    }
    cout <<cnt << endl;
}

int main()
{
    vector <int> vc = {4, 1, 5, 2, 10, 3};
    bubbleSort(vc);
    for(auto it : vc)
        cout<<it<<" ";

    return 0;
}
