#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string ch;
    Node *next;
    Node *prev;
    Node(string ch)
    {
        this->ch = ch;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node *&head, Node* &tail, string ch)
{
    Node *new_node = new Node(ch);
    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->ch << endl;
        temp = temp->next;
    }
    //cout << endl;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    // Node *head = new Node("+");
    // Node *a = new Node("-");
    // Node *b = new Node("*");
    // Node *c = new Node("/");

    // head->next = a;
    // a->prev = head;

    // a->next = b;
    // b->prev = a;

    // b->next = c;
    // c->prev = b;

    insert_at_head(head, tail, "=");
    print_forward(head);
    cout <<"Head->" <<" " << head->ch << endl;
    return 0;
}