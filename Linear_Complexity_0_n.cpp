#include <bits/stdc++.h>
using namespace std;
int main()
{
    //count linear complexity using loop
    int n;     //0(1)
    cin >> n;   //0(1)

    for (int i = 1; i <= n; i++)    //0(n)
    {
        cout << i << " ";
    }
    return 0;   //0(1)
}
//total complexity -> 0(n)