#include <bits/stdc++.h>
using namespace std;

// Recursion Function
int fib(int n)
{
    // If n is 1 or 0, then return n, works for 0th and 1st terms
    if (n <= 1)
        return n;
    // Recurrence relation to find the rest of terms
    // Explanation: As 5 is the 5th Fibonacci number of series 0, 1, 1, 2, 3, 5, 8, 13…. (0-based indexing)
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n = 5;

    cout << fib(n);
    return 0;
}