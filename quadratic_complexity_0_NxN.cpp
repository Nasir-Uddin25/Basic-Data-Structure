#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Determine quadratic complexity 0(n*n) using nested for loop
    /*  for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             cout << "Hello World" << endl;
         }
     } */

    // Example - 01
    // linear complexity 0(n+n) -> 0(2n) ->0(n)
    /*   for (int i = 0; i < n; i++)     //0(n)
      {
          cout << "Hi" << endl;
      }
      for (int j = 0; j < n; j++)     //0(n)
      {
          cout << "Hello" << endl;
      } */

    // Example - 02
    // 0(n*m)
    /*  for (int i = 0; i < n; i++) //0(n)
     {
         for (int j = 0; j < m; j++)  //0(m)
         {
             cout << "Hello" << endl;
         }
     } */

    // Example - 03
    //0(n*n*n)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << "Hello" << endl;
            }
        }
    }
    return 0;
}