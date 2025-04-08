// https://codeforces.com/contest/2051/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        int n;
        cin >> n;
        int arrM[n];
        int arrS[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arrM[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arrS[i];
        }

        int sumM = 0;
        int sumS = 0;

        for (int i = 0; i < n; i++)
        {

            if (i == (n - 1))
            {
                sumM += arrM[n - 1];
                break;
            }
            if (arrM[i] >= arrS[i + 1])
            {
                sumM += arrM[i];
                sumS += arrS[i + 1];
            }
        }

        cout << sumM - sumS << endl;
    }

    return 0;
}