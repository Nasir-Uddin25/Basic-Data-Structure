// https://codeforces.com/problemset/problem/1832/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    v.erase(v.begin(), v.begin() + 2);
    v.pop_back();
    int sum1 = 0;
    for (int i = 0; i < n - 2; i++)
        sum1 += v[i];

    for (int i = 0; i < n - 2; i++)
        cout << v[i] << " ";
    cout << sum1 << " ";
    return 0;
}