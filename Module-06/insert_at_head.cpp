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

void insert_at_head(Node* &head, int val) 
{
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
void print_linked_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
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

    // initially access head
    insert_at_head(head, 100); // passing value
    insert_at_head(head, 200); // passing value
    insert_at_head(head, 300); // passing value
    insert_at_head(head, 400); // passing value
    print_linked_list(head);
    return 0;
}