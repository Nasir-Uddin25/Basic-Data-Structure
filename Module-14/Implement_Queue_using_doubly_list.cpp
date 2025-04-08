#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
        new_node->prev = tail;
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
            return;
        }
        head->prev = NULL;
    }

    int front() // 0(1)
    {
        return head->val;
    }

    int back() // 0(1)
    {
        return tail->val;
    }

    int size() //0(1)
    {
        return sz;
    }

    bool empty() //0(1)
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