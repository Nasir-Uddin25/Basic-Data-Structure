#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q; // Number of test cases

    while (Q--)
    {
        string ch;
        cin >> ch; // Input string for this query

        stack<char> st;

        for (int i = 0; i < ch.size(); i++)
        {
            if (st.empty())
            {
                st.push(ch[i]);
            }
            else
            {
                if ((st.top() == '0' && ch[i] == '1') || (st.top() == '1' && ch[i] == '0'))
                {
                    // If top is '0' and current is '1' OR top is '1' and current is '0', pop the stack
                    st.pop();
                }
                else
                {
                    // Otherwise, push the current character onto the stack
                    st.push(ch[i]);
                }
            }
        }

        // If the stack is empty, all pairs were valid and deleted
        if (st.empty())
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
