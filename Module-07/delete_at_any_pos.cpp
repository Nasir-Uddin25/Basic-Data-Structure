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

void insert_at_tail(Node *&head, Node *&tail, int val) // Receive value
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void delete_at_head(Node *&head)
{
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
}

void delete_at_any_pos(Node *&head, int index)
{
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    Node* delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
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
    delete_at_any_pos(head, 3);
    print_linked_list(head);
    return 0;
}