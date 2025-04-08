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

int minimum_value(Node *head)
{
    int mn = INT_MAX;

    Node *temp = head;
    while (temp != NULL)
    {
        mn = min(mn, temp->val);
        temp = temp->next;
    }
    return mn;
}
int maximum_value(Node *head)
{

    int mx = INT_MIN;
    Node *temp = head;
    while (temp != NULL)
    {

        mx = max(mx, temp->val);
        temp = temp->next;
    }
    return mx;
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

    int mn = minimum_value(head);
    int mx = maximum_value(head);

    int get_difference = mx - mn;

    cout << get_difference << endl;
    return 0;
}