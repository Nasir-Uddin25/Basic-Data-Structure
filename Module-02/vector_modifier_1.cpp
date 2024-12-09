#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*  // ভেক্টরের মধ্যে অ্যারে ইনিশিয়েলাইজেশন
     vector<int> v = {
         1,
         2,
         3,
         4,
     };
     //vector<int> v2;
     //v2 = v; // Assign another vector.

     // for (int i = 0; i < v2.size(); i++)
     // {
     //     cout << v2[i] << " ";
     // }

     v.push_back(10);        //Add an element to the end.
     v.push_back(10);
     v.pop_back();           //Remove the last element.
     v.pop_back();
     //Range based for loop
     for(int i : v)
     {
         cout << i << " ";
     } */

    // Insert elements at a specific position.
    /*   vector<int> v = {1, 2, 3, 4, 5, 6};
      vector<int> v2 = {100,200,300};

      // v.insert(position, value);
      //v.insert(v.begin() + 6, 10);
      v.insert(v.begin() + 2, v2.begin(), v2.end());  //Insert multiple elements at a specific position

      for (int i : v)
      {
          cout << i << " ";
      } */

    // Delete elements from a specific position.
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    // v.erase(v.begin() + 3);
    v.erase(v.begin() + 1, v.begin() + 6);
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}