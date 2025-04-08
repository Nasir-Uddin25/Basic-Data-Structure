#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    int b[n];
    int c[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
} 

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     vector<int> b(n);
//     vector<int> c;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i];
//     }

//     c.insert(c.end(), b.begin(), b.end());
//     c.insert(c.end(), a.begin(), a.end());

//     for (int i = 0; i < c.size(); i++)
//     {
//         cout << c[i] << " ";
//     }
//     return 0;
// }