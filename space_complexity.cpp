#include <bits/stdc++.h>
using namespace std;
int main()
{
    // স্পেস কম্পিলিজিটি হলো ইনপুটের রেসপেক্ট  এ সে মেমোরিতে কতটুকু জায়গা নিবে
    int n;
    cin >> n;
    // int sum = 0;
    // for (int i = 0; i < n; i++) // space complexity 0(1)
    // {
    //     sum += i;
    // }
    // cout << sum << endl;

    // int a[n]; // 0(n)
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }

    int a[n][n];  //0(n*n)
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][i];
    }
    return 0;
}