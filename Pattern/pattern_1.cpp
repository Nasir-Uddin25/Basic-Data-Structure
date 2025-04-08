#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;     // to start i is equal 1
    while (i <= n) // if i is less than equal to n, then loop continue
    {
        cout << i << " "; // print i with space
        i++;              // i is increment 1 after print
    }
    cout << endl;

    int m;
    cin >> m;
    for (int j = 1; j <= m; j++)
    {
        cout << j << " ";
    }

    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    int b;
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*'<<" ";
        }
        cout << endl;
    }
    return 0;
}