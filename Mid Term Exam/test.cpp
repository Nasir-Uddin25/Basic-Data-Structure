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

// Function to insert at a specific position in the doubly linked list
void insert_at_position(Node *&head, Node *&tail, int index, int val)
{
    Node *new_node = new Node(val);

    if (index == 0)
    {
        // Insert at the head
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
        return;
    }

    Node *tmp = head;
    int pos = 0;

    // Traverse to the position before the desired index
    while (tmp != NULL && pos < index - 1)
    {
        tmp = tmp->next;
        pos++;
    }

    if (tmp == NULL)
    {
        // Invalid index
        cout << "Invalid" << endl;
        delete new_node;
        return;
    }

    // Insert at the tail
    if (tmp->next == NULL)
    {
        new_node->prev = tmp;
        tmp->next = new_node;
        tail = new_node;
    }
    else
    {
        // Insert in the middle
        new_node->next = tmp->next;
        new_node->prev = tmp;
        tmp->next->prev = new_node;
        tmp->next = new_node;
    }
}

// Function to print the linked list from left to right
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

// Function to print the linked list from right to left
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

        insert_at_position(head, tail, index, value);

        if (head != NULL)
        {
            print_forward(head);
            print_backward(tail);
        }
    }

    return 0;
}
