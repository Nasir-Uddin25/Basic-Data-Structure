// https://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int length = s.size();
    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
            cout << "CHAT WITH HER!" << endl;
        else
            cout << "IGNORE HIM" << endl;
    }

    return 0;
}