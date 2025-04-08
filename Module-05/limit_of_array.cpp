#include <bits/stdc++.h>
using namespace std;
int main()
{
    // sequential memory allocation
    //int a[5] = {1, 2, 3, 4, 5};
    vector<int> v ={10,20,30,40,50};
    v.push_back(100);

    cout << (uintptr_t)&v[1] <<" " <<(uintptr_t)&v[2] << " " << (uintptr_t)&v[3] <<" " << (uintptr_t)&v[5];
    return 0;
}