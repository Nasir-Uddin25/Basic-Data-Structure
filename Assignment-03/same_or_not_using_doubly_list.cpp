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

class Stack
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *new_node = new Node(val);

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void pop()
    {

        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;

        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
    }
};

class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;

    void push(int val)
    {
        Node *new_node = new Node(val);

        sz++;

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void pop()
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;

        sz--;
    }

    int size()
    {
        return sz;
    }

    int front()
    {
        return head->val;
    }

    int back()
    {
        return tail->val;
    }

    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    Stack st;
    Queue q;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (st.size() == q.size())
    {
        if (st.top() == q.front())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}