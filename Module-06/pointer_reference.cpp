#include <bits/stdc++.h>
using namespace std;

void fun(int* &p)
{
    // int y = 200;
    // p = &y;
    //*p = 100;
    p = NULL;
    //cout << "Fun " << *p << endl;
}
int main()
{
    int x = 10;
    int *p = &x;

    fun(p);

    cout << "Main " << p << endl;
    return 0;
}