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

Node *linked_list_input()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (cin >> val && val != -1)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }

        tail->next = newnode;
        tail = newnode;
    }

    return head;
}

int find_Index(Node *head, int X)
{
    int index = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->val == X)
        {
            return index;
        }
        temp = temp->next;
        index++;
    }

    return -1;
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

    int t;
    cin >> t;
    while (t--)
    {

        Node *head = linked_list_input();
        int x;
        cin >> x;
        cout << find_Index(head, x) << endl;
    }
    return 0;
}