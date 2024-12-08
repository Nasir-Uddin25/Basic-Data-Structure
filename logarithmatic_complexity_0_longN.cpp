#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // for (int i = 1; i <= n-5; i+=2) //Big O notaiton -> 0(n) ->worst case
    // {
    //     cout << i << " ";
    // }

    // Example - 01
    //  ‍যদি লুপ এর ইনক্রিমেন্ট অংশে গুন হয়ে হয়ে বাড়ে এবং ভাগ হয়ে হয়ে কমে । তখন সেটি 0(logN)
    // for (int i = 1; i <= n; i *= 2) // 0(logN)
    // {
    //     cout << i << endl;
    // }

    // Example - 02
    // for (int i = n; i >= 1; i /= 3)
    // {
    //     cout << i << endl;
    // }

    // Example - 03
    int k = 2;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
        i = i * k;      //logarithmic complexity 0(logN)
    }
    return 0;
}