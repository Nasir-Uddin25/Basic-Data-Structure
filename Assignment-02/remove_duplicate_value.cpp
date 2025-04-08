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

void remove_duplicate_value(Node *&head)
{
    if (head == NULL)
        return;

    Node *i = head;
    while (i != NULL)
    {
        Node *j = i;
        while (j->next)
        {
            if (j->next->val == i->val)
            {
                Node *delete_node = j->next;
                j->next = j->next->next;
                delete delete_node;
            }
            else
            {
                j= j->next;
            }
        }
       i = i->next; 
    }
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
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
    remove_duplicate_value(head);
    print_linked_list(head);
    return 0;
}