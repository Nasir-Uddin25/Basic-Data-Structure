#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 1 || n > 20 || n % 2 == 0)
        return 0;

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < i; j++)
           cout << " ";
        cout << "/";
        // for (int j = 0; j < n - 2 * (i + 1); j++)
        //     cout << " ";
        // cout << "/" << endl;
    }

    // for (int i = 0; i < n / 2; i++)
    //     cout << " ";
    // cout << "X" << endl;

    // for (int i = n / 2 - 1; i >= 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //         cout << "/";
    //     for (int j = 0; j < n - 2 * (i + 1); j++)
    //         cout << " ";
    //     cout << "\\" << endl;
    // }
    return 0;
}
