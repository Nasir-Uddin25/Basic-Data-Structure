#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> a = {2, 3, 4, 5, 6};
    // // for (int i = 0; i < a.size(); i++)
    // // {
    // //     cout << a[i] << " ";
    // // }

    // vector<int> b = {10, 20, 30};

    // a.insert(a.begin() + 3, b.begin(), b.end());

    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }
    int n;
    cin >> n;

    vector<int> a(100005);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    vector<int> b(m);
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    int x;
    cin >> x;

    a.insert(a.begin() + x, b.begin(), b.end());

    for (int i = 0; i < n + m; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}