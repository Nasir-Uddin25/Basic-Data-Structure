#include <bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int, vector<int>, greater<int>> min_heap;

    int n;
    cin >> n; 

 
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        min_heap.push(x);
    }

    int q;
    cin >> q; 

    while (q--)
    {
        int command;
        cin >> command; 

        if (command == 0)
        {
      
            int x;
            cin >> x;
            min_heap.push(x);
            cout << min_heap.top() << endl; 
        }
        else if (command == 1)
        {
     
            if (min_heap.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << min_heap.top() << endl; 
            }
        }
        else if (command == 2)
        {
         
            if (min_heap.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                min_heap.pop(); 
                if (min_heap.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << min_heap.top() << endl; 
                }
            }
        }
    }

    return 0;
}
