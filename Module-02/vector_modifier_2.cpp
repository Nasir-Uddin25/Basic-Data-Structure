#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*    vector<int> v = {1, 2, 3, 2, 4, 2};

       // Replace all the value with replace_value. Not under a vector.
       // replace(v.begin(),v.end(),value,replace_value)
       replace(v.begin() + 3, v.end(), 2, 100);
       // Range based for loop
       for (int i : v)
       {
           cout << i << " ";
       } */

    vector<int> v = {1, 2, 3, 7, 9, 5};
    // Find the value V. Not under a vector.
    //vector<int>::iterator it = find(v.begin(), v.end(), 2);
    auto it = find(v.begin(), v.end(), 100);
    cout << *it << endl;
    // if (it == v.end())
    // {
    //     cout << "Not found" << endl;
    // }
    // else
    // {
    //     cout << "found" << endl;
    // }
    return 0;
}