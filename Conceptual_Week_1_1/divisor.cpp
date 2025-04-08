/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int cs = 1; cs <= t; cs++)
    {
        int n;
        cin >> n;

        vector<int> divisor;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                divisor.push_back(i);
                if (n / i != i)
                    divisor.push_back(n / i);
                // cout << i << " " << n / i << " ";
            }
        }
        sort(divisor.begin(), divisor.end());
        cout << "Case" << " " << cs << ":" << " ";
        for (int i = 0; i < divisor.size(); i++)
        {
            cout << divisor[i] << " ";
        }
        cout << endl;
    }

    return 0;
} */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[1000];
    int k = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            a[k++] = i;
            if (i != n / i)
            {
                a[k++] = n / i;
            }
        }
    }

    sort(a, a + k);

    for (int i = 0; i < k; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}