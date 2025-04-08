#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l; // Construct a list with 0 elements.

    void push(int val) // Add an element to the tail/back of the stack.
    {
        l.push_back(val); // Add an element to the end of the vector
    }

    void pop() // Delete the last value of the stack.
    {
        l.pop_back(); // Remove the last element of the vector.
    }

    int top() // Access the last element of the stack.
    {
        return l.back(); // Access the tail element.
    }

    int size() // Returns the size of the stack.
    {
        return l.size(); // Returns the size of the vector.
    }

    bool empty() // Return true/false if the stack is empty or not.
    {
        return l.empty();
    }
};
int main()
{
    myStack st; // Static Object

    // Stack input using array
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}