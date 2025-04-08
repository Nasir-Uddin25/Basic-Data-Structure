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

void insert_at_any_pos(Node *head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
   // cout << temp->val << endl;
   newNode->next = temp->next;
   temp->next->prev = newNode;

   temp->next = newNode;
   newNode->prev = temp;
}

void print_forward(Node *head)
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

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_any_pos(head, 2, 100);
    insert_at_any_pos(head, 1, 500);
    print_forward(head);

    return 0;
}