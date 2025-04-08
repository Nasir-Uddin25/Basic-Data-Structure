#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v; // Construct a vector with 0 elements.

    void push(int val) // Add an element to the tail/back of the stack.
    {
        v.push_back(val); // Add an element to the end of the vector
    }

    void pop() // Delete the last value of the stack.
    {
        v.pop_back(); // Remove the last element of the vector.
    }

    int top() // Access the last element of the stack.
    {
        return v.back(); // Access the last element.
    }

    int size() // Returns the size of the stack.
    {
        return v.size(); // Returns the size of the vector.
    }

    bool empty() // Return true/false if the stack is empty or not.
    {
        return v.empty();
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