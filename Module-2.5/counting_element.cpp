/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(n, 5);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i] ;
    }
    // vector<int>::iterator it = find(v.begin(), v.end(), 5);
    auto it = find(v.begin(), v.end(), 5);
    cout << *it << endl;
    if (it == v.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    return 0;
}  */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // অ্যারের আকার ইনপুট নিতে হবে
    cin >> n;

      // উপাদান খুঁজে বের করার জন্য একটি ফাঁকা ভেক্টর  ব্যবহার করি
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int cnt = 0; // গণনার জন্য ভেরিয়েবল
    for (int i = 0; i < n; i++)
    {
        // ‍যদি ‍v[i] + 1 ভেক্টরে থাকে, তাহলে কাউন্ট বাড়িয়ে দি
        auto it = find(v.begin(), v.end(), v[i] + 1);
        if (it == v.end())
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
