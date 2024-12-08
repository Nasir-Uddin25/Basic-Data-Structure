/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    //count linear complexity using loop
    int n;     //0(1)
    cin >> n;   //0(1)


//আমি যদি n এর সাথে 5 যোগ বা বিয়োগ বা গুণ করি তাহলে মানের কোনো পরিবর্তন হবে না । 0(n) থাকবে
    for (int i = 1; i <= n/2; i++)    //0(n)
    {
        cout << i << " ";
    }
    return 0;   //0(1)
}
//total complexity -> 0(n) */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i += 2) // লুপটি ৫ বার চলে 0(n/2) 2 is ignore .then complexity 0(n)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 1; i <= n; i++) // লুপটি ১০ বার চলে ।complexity 0(n)
    {
        cout << i << " ";
    }
    return 0;
}