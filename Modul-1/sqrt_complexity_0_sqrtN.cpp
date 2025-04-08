#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    //sqrt complexity -> 0(sqrtN)
    //  for (int i = 1; i <= sqrt(n); i++)
    //  {
    //      cout << i << endl;
    //  }

    // find out divisor from loop
    // 36 is divisor -> 1, 2, 3, 4, 6, 9, 12, 18, 36
    /*   for (int i = 1; i <= n; i++)
      {
          if (n % i == 0)
          {
              cout << i << " ";
          }
      } */

    // optimize and better way out of divisor
    // for (int i = 1; i <= sqrt(n); i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " " << n / i << " ";
    //     }
    // }

    // for (int i = 1; i * i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " " << n / i << " ";
    //     }
    // }
    return 0;
}