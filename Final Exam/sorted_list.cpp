/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        list<int> l;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            l.push_back(val);
        }

        l.sort();
        l.unique();
        for (int x : l)
            cout << x << " ";
        cout << endl;
    }

    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            s.insert(val);
        }

        for (auto it = s.begin(); it != s.end(); it++)
            cout << *it << " ";
        cout << endl;
    }

    return 0;
}