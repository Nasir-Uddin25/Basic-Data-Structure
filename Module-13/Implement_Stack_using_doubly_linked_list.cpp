#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    // Intially nodes is empty
    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;

    void push(int val) // 0(1)
    {
        sz++;
        // Insert at tail in doubly list
        Node *new_node = new Node(val);
        if (head == NULL) // Corner case handle
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void pop() // 0(1)
    {
        sz--;

        Node *delete_node = tail;
        tail = tail->prev;
        delete delete_node;
        // If node is one . That node is pointed tail but head is pointed empty. So , head has to take NULL
        //  Tail is pointed NULL and his next is NULL. If I do access NULL->next = NULL. I will be error.
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top() // 0(1)
    {
        return tail->val; // Access the tail element.
    }

    int size() // 0(1)
    {
        return sz; // Returns the size of the vector.
    }

    bool empty() // 0(1)
    {
        if (head == NULL)
            return true;
        else
            return false;
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