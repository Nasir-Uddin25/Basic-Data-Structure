/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n + 1);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] == v[j])
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        //int sum = 0;

        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < mn)
                mn = arr[i];
        }
        // for (int i = 0; i < n; i++)
        //     cout << arr[i] << " ";
        // cout << endl;
        // sum += arr[i];

        cout << mn << endl;
    }
}