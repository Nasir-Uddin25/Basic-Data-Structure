#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector<int> v;     // Construct a vector with 0 elements
    // vector<int> v(10);    //Construct a vector with N elements.
    /* vector<int> v(5, 6); // Construct a vector with N elements and the value will be V.
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << v.size() << endl; */

    /*   vector<int> v(5, 9);
      vector<int> v2(v);  //Construct a vector with N elements and the value will be V.
      for (int i = 0; i < v2.size(); i++)
      {
          cout << v2[i] << " ";
      } */

    /*  int a[5] = {1, 2, 3, 4, 5};
     vector<int> v(a, a + 5);        //Construct a vector by copying all elements from an array A of size N.
     for (int i = 0; i < v.size(); i++)
     {
         cout << v[i] << " ";
     } */

    // ভেক্টরে অ্যারে ইনিশিয়েলাইজেশন করা যায়
    vector<int> v = {10, 2, 3, 4};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}