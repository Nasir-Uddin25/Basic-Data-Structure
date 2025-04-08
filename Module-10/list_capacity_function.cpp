#include <bits/stdc++.h>
using namespace std;
int main()
{
    // type - 1
    //  list<int> myList;
    //  cout << myList.size() << endl;

    // type - 2
    // list<int> myList;
    // cout << myList.max_size() << endl;

    // type - 3
    //  list<int> myList(4, 9);
    //  myList.clear();
    //  cout << myList.size() << endl;
    //  for(int val : myList)
    //  {
    //      cout << val << endl;
    //  }

    // type - 4
    // list<int> myList(4, 9);
    // myList.clear();
    // if (myList.empty())
    // {
    //     cout << "Empty" << endl;
    // }
    // else
    // {
    //     cout << "Not Empty" << endl;
    // }
    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }



    //type - 5
    list<int> myList(4, 9);
    myList.resize(9,100);
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}