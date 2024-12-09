#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();

    // vector<string> v(n);    //vector string declare
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        // cin >> v[i];
        // getline(cin, v[i]);
        int x;
        cin >> x;
        v.push_back();
    }

    // Range based for loop
    for (string s : v)
    {
        cout << s << endl;
    }
    return 0;
}