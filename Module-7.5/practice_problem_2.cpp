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
void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
void insert_at_any_position(Node *&head, int index, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = tail->next;
}
int size_linked_list(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int idx;
    while (cin >> idx >> val)
    {
        int sz = size_linked_list(head);
        if (idx > sz)
        {
            cout << "Invalid" << endl;
        }
        else if (idx == sz)
        {
            insert_at_tail(head, tail, val);
            print_linked_list(head);
        }
        else if (idx == 0)
        {
            insert_at_head(head, val);
            print_linked_list(head);
        }
        else
        {
            insert_at_any_position(head, idx, val);
            print_linked_list(head);
        }
    }
    return 0;
}