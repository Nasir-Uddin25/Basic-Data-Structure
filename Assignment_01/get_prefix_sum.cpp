#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<long long int> v(100005);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<long long int> pre(100005);

    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // reverse(pre.begin(), pre.end() + n);
    // sort(pre.begin())
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        swap(pre[i], pre[j]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }
    return 0;
}
//আমরা জানি যে একটি লুপের ভিতর আরেকটি লুপ চললে তার টাইম কমপ্লিক্সটি 0(n)। তাহলে লুপটি চলবে 0(n^2) পর্যন্ত