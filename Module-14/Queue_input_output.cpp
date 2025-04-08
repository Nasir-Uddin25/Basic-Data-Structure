#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;

    void push(int val) // 0(1)
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
        tail = new_node;
    }

    void pop() // 0(1)
    {
        sz--;
        Node *delete_node = head;
        head = head->next;
        delete delete_node;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front() // 0(1)
    {
        return head->val;
    }

    int back() // 0(1)
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
int main()
{
    myQueue q;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    //cout << q.front() <<" " << q.back() <<" " << q.size() << endl;
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}