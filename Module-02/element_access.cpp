#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {3, 7, 4, 9, 6};
    cout << v[2] << endl; // Access the ith element.
    cout << v[v.size() - 1] << endl;
    cout << v.back() << endl; // Access the last element.
    cout << v[0] << endl;
    cout << v.front() << endl; //Access the first element
    return 0;
}