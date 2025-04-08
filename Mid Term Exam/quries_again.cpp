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

bool insert_at_position(Node *&head, Node *&tail, int index, int val)
{
    Node *new_node = new Node(val);

    // Insert at head
    if (index == 0)
    {
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
        return true;
    }

    // Traverse to the insertion point
    Node *temp = head;
  
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    //  Invalid index
    if (temp == NULL)
    {
        return false;
    }

    //  Insert at the tail
    if (temp->next == NULL)
    {
        new_node->prev = temp;
        temp->next = new_node;
        tail = new_node;
        return true;
    }

    // Insert in the middle
    new_node->next = temp->next;
    new_node->prev = temp;
    temp->next->prev = new_node;
    temp->next = new_node;

    return true;
}

void print_forward(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int index, value;
        cin >> index >> value;

        bool result = insert_at_position(head, tail, index, value);
        if (!result)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            print_forward(head);
            print_backward(tail);
        }
    }

    return 0;
}
