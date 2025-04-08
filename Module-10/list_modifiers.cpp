#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 20, 50, 20, 70};
    // list<int> list_2;
    //  list_2 = myList;
    // list_2.assign(myList.begin(), myList.end());

    // myList.push_front(400);
    // myList.push_back(300);

    // myList.pop_front();
    // myList.pop_back();

    // Insert 100 at the position 2 elements past the beginning
    // myList.insert(next(myList.begin(), 2), 100);

    // cout << *next(myList.begin(), 0) << endl;
    // myList.erase(next(myList.begin(), 3));
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));

    // replace(myList.begin(), myList.end(), 20, 200);

    auto it = find(myList.begin(), myList.end(), 100);
    if (it == myList.end())
    {
        cout << "Element not Found" << endl;
    }
    else
    {
        cout << "Element Found" << endl;
    }

    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}