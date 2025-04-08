#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  vector<int> v;

    //  cout << v.size() << endl;     // Returns the size of the vector.
    //  cout << v.max_size() << endl; // Returns the maximum size that the vector can hold.

    // vector<int> v;
    // cout << v.capacity() << endl; // Returns the current available capacity of the vector.
    // v.push_back(10);              // Add an element to the end
    // cout << v.capacity() << endl;
    // v.push_back(20);
    // cout << v.capacity() << endl;
    // v.push_back(30);
    // cout << v.capacity() << endl;
    // v.push_back(40);
    // cout << v.capacity() << endl;
    // v.push_back(50);
    // cout << v.capacity() << endl;

    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);

    // cout << v.size() << endl;
    // v.clear(); // Clears the vector elements. Do not delete the memory, only clear the value.
    // cout << v.size() << endl;
    //  cout << v[0] <<endl;
    // cout << v[1] <<endl;
    // cout << v[2] <<endl;

    //  vector<int> v;
    //  v.push_back(10);
    //  if (v.empty() == 1)     //Return true/false if the vector is empty or not.
    //  {
    //      cout << "empty" << endl;
    //  }
    //  else
    //  {
    //      cout << "Not empty" << endl;
    //  }

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.resize(4);
    v.resize(10, 100);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}