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

void insert_at_tail_optimized(Node *&head, Node* &tail, int val)
{
    Node* new_node = new Node(val);
    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
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
void print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *tail = new Node(40);

    // head->next = a;
    // a->prev = head;

    // a->next = b;
    // b->prev = a;

    // b->next = tail;
    // tail->prev = b;
    insert_at_tail_optimized(head, tail, 100);
    insert_at_tail_optimized(head, tail, 200);
    print_forward(head);
    print_backward(tail);

    return 0;
}