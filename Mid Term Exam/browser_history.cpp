#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node *curr = NULL;


void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}


string visit(Node *&head, string val)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == val)
        {
            curr = tmp;
            return curr->val;
        }
        tmp = tmp->next;
    }
    return "Not Available";
}


string next()
{
    if (curr && curr->next)
    {
        curr = curr->next;
        return curr->val;
    }
    return "Not Available";
}


string prev()
{
    if (curr && curr->prev)
    {
        curr = curr->prev;
        return curr->val;
    }
    return "Not Available";
}


void free_memory(Node *&head)
{
    Node *tmp;
    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        delete tmp;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

   
    string address;
    while (true)
    {
        cin >> address;
        if (address == "end")
            break;
        insert_at_tail(head, tail, address);
    }

   
    //curr = head;

  
    int q;
    cin >> q;
    string command;
    while (q--)
    {
        cin >> command;
        if (command == "visit")
        {
            string val;
            cin >> val;
            cout << visit(head, val) << endl;
        }
        else if (command == "next")
        {
            cout << next() << endl;
        }
        else if (command == "prev")
        {
            cout << prev() << endl;
        }
    }

    // Free allocated memory
    free_memory(head);

    return 0;
}
