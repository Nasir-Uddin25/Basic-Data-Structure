#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {40, 20, 10, 50, 10, 40, 10, 50};
    // myList.remove(10);
    // myList.sort();
    //myList.sort(greater<int>());

    // myList.unique();
    myList.reverse();
    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}