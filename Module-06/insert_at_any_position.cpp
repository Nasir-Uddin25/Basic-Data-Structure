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

void insert_at_any_position(Node *&head, int index, int val) // Receive value
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= index; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
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
    // Dynamic Node
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    // if linked list is empty
    // Node *head = NULL;

    insert_at_any_position(head, 2, 100);
    insert_at_any_position(head, 2, 200);
    print_linked_list(head);
    return 0;
}