#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Q; 
    cin >> Q;

    queue<string> q; 

    while (Q--)
    {
        string command;
        cin >> command;

        if (command == "0")
        { 
            string val;
            cin >> val;
            q.push(val);
        }
        else if (command == "1")
        { 
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}
