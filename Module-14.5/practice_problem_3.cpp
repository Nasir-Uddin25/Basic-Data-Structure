// Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    stack<int> st2;
    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }

    while(!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    return 0;
}