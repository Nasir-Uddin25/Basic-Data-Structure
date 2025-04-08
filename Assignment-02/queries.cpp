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

void inser_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void delete_at_index(Node *&head, int index)
{
    if (!head || index < 0)
    {
        return;
    }

    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *temp = head;
    for (int i = 0;  temp && i < index - 1; i++)   
    {
        temp = temp->next;
    }

    if (!temp || !temp->next)
    {
        return;
    }

    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
}

void print_linked_list(Node *head)
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
    Node *head = NULL;
    int Q;
    cin >> Q;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            inser_at_head(head, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, V);
        }
        else if (X == 2)
        {
            delete_at_index(head, V);
        }

        print_linked_list(head);
    }

    return 0;
}
