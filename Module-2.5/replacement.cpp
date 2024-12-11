/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    // Replace every positive number by 1.
    // Replace every negative number by 2.
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // int pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            a[i] = 1;
            // pos++;
        }
        if (a[i] < 0)
        {
            a[i] = 2;
            // neg++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Replace every positive number by 1.
    // Replace every negative number by 2.
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            v[i] = 1;
        }

        if (v[i] < 0)
        {
            v[i] = 2;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}