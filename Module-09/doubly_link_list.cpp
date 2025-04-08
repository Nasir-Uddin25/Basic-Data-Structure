#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    // node create
    int val;
    Node *next;
    Node *prev;
    // constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
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
    Node* temp = tail;
    while(temp != NULL)
    {
        cout << temp->val <<" ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    // dynamic node create
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    // forward link list
    head->next = a;
    a->next = tail;

    // backward link list
    a->prev = head;
    tail->prev = a;

    // doubly link list print
    print_forward(head);
    print_backward(tail);
    return 0;
}