#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val);
    }

    cout << "Before Set" << endl;
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    vector<int> v;
    for (auto it = s.begin(); it != s.end(); it++)
        v.push_back(*it);

    reverse(v.begin(), v.end());
    cout << endl;
    cout << "After Set" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
    return 0;
}