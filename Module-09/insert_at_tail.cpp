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

void insert_at_tail(Node *&head, int index, int val)
{
    Node *temp = head;
    for (int i = 0; i < index; i++)
    {
        temp = temp->next;
    }

    Node *new_node = new Node(val);

    temp->next = new_node;
    new_node->prev = temp;
    temp = new_node;
}

void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
    // cout << endl;
}
int main()
{
    
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    insert_at_tail(head, 2, 100);
    print_forward(head);

    return 0;
}