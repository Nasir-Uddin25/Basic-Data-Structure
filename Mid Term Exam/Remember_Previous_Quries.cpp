#include <bits/stdc++.h>
using namespace std;

void print_list(list<int> l)
{

    cout << "L -> ";
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "R -> ";
    for (auto it = l.rbegin(); it != l.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> myList;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {

            myList.push_front(v);
        }
        else if (x == 1)
        {

            myList.push_back(v);
        }
        else if (x == 2)
        {

            if (v < 0 || v >= (int)myList.size())
            {

                print_list(myList);
                continue;
            }
            auto it = myList.begin();
            for (int i = 0; i < v; i++)
            {
                it++;
            }
            myList.erase(it);
        }

        print_list(myList);
    }

    return 0;
}
