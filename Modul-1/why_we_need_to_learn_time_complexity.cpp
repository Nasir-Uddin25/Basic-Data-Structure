#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // using loop
    // int sum = 0;
    // for (int i = 1; i <= n; i++)    // এন এর মান যত হবে ততবার অপারেশন হবে
    // {
    //     sum += i;
    // }
    // cout << sum << endl;

    // using formula
    int sum;
    sum = (n * (n + 1)) / 2;      //এখানে এক বার অপারেশন হবে
    cout << sum << endl;
    return 0;
}