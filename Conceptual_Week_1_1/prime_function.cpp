/* #include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int divisor = 2; divisor <= sqrt(num); divisor++)
    {
        if(num % divisor == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int number;
    cin >> number;

    if(isPrime(number))
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;

        int flag = 1;
        if (num <= 1)
        {
            flag = 0;
        }

        for (int divisor = 2; divisor <= sqrt(num); divisor++)
        {
            if (num % divisor == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}