#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* int a[4] = {12, 13, 14, 15};
    vector<int> v(a, a + 4);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << v[3] << endl; */

    /*   vector<int> v = {1, 2, 3, 4};
      v.resize(2);
      v.push_back(10);
      v.push_back(20);
      v.pop_back();
      v.resize(4);

      for(int i : v)
      {
          cout << i <<" ";
      } */

    /*  vector<int> v = {1, 2, 3, 4, 5};
     v.insert(v.begin() + 3, 20);
     for (int i : v)
     {
         cout << i << " ";
     } */

    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(v.begin() + 2, v.end());
    for(int i : v)
    {
        cout << i <<" ";
    }
    return 0;
}