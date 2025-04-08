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
void insert_at_tail_1(Node *&head_1, Node *&tail_1, int val) 
{
    Node *newnode = new Node(val);
    if (head_1 == NULL)
    {
        head_1 = newnode;
        tail_1 = newnode;
        return;
    }

    tail_1->next = newnode;
    tail_1 = tail_1->next;
}
bool is_Equal(Node *&head , Node* &head_1)
{
    Node *temp1 = head;
    Node *temp2 = head_1;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (temp1 != NULL || temp2 != NULL)
    {
        return false;
    }
    return true;
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

    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail_1(head_1, tail_1, val);
    }

    if (is_Equal(head, head_1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}