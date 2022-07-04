// Vector: This is a part of STL containers
// It's contain sequential value

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    ///print 1st value
    cout <<"1st value of vector: "<< v.front() <<"\n";

    ///print last value
    cout <<"Last value of vector: "<< v.back() <<"\n";

    //Print size and capacity
    vector <int> v1;
    for( int i= 0; i < 10; i++)
    {
        v1.push_back(i);
        cout <<"Size : " << v1.size() << " Capacity : " <<v1.capacity() << endl;
    }
    return 0;
}
