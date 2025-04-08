#include <bits/stdc++.h>
using namespace std;
int main()
{
    // type - 1
    // list<int> myList;
    // cout << myList.size() << endl;

    // type - 2
    // list<int> myList(4, 8);
    // Iterator through for loop
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // Range based for loop
    //  for(int val : myList)
    //  {
    //      cout << val << endl;
    //  }

    // type - 3
    // list<int> myList(4, 7);
    // list<int>list_2(myList);
    // for(int val : list_2)
    // {
    //     cout << val << endl;
    // }

    // type - 4
    // int a[5] = {1, 2, 3, 4, 5};

    // list<int> myList(a, a + 5);
    // for(int val : myList)
    // {
    //     cout << val << endl;
    // }

    // type - 5
    vector<int> v = {10, 20, 30, 40, 50};

    list<int> myList(v.begin(),  v.end());
    for(int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}