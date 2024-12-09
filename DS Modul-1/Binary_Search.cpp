#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, q;       // ইউজার দুটি সংখ্যা ইনপুট নিবে
    cin >> n >> q;

    int a[n];      // অ্যারে ডিক্লেয়ার

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];    //অ্যারের প্রতিটি ইনডেক্স গিয়ে অ্যারে ইনপুট নি
    }

    for (int i = 0; i < q; i++)  //কুয়েরি উপর লুপ চালিয়ে
    {
        int x;         
        cin >> x;
        int flag = 0;   
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)   //এই নাম্বারগুলো দিয়ে অ্যারেতে সার্চ করি
            {
                flag = 1;  //যখনই অ্যারের নাম্বার পেয়ে যাবে তখনই flag = 1 করি দি।
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}