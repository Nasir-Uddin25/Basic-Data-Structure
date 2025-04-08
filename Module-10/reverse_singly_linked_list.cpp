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
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void reverse_print(Node *&head, Node *&tail, Node *temp)
{
    // Base Case
    if (temp->next == NULL)
    {
        head = temp;
        return;
    }

    reverse_print(head,tail, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
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
    while (cin >> val)
    {
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    reverse_print(head, tail, head);

    print_linked_list(head);
    cout << "Head" << head->val << endl;
    cout << "Tail" << tail->val << endl;
    return 0;
}