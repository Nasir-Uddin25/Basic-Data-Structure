#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {30, 40, 10, 50, 30, 70};
    cout << "First Element:" << " " << myList.front() << endl;
    cout << "Last Element" << " " << myList.back() << endl;
    cout << "List_any_Element" <<" " << *next(myList.begin(), 2) <<endl;
    cout << "First_Element" <<" " << *myList.begin() << endl;
    cout << "Last_Element" <<" " << *myList.end()-1 << endl;
    return 0; 
}