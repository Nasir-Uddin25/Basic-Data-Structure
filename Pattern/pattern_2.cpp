#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string a;
    string b;
    string p;
    char A = 'A';
    for (int i = 1; i <= n; i++)
    {
        a += 'a';
        cout << a;
        if (i > 1)
        {
            b += 'b';
            cout << b;
        }
        if (i > 2)
        {
            p += '*';
            cout << p;
        }
        cout << A;
        A += 2;
        cout << endl;
    }
    return 0;
}