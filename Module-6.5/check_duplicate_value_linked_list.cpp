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
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}

bool check_duplicate_value(Node *&head, int val)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *temp_2 = temp->next;
        while (temp_2 != NULL)
        {
            if(temp->val != temp_2->val)
            {
                return false;
            }
            temp_2 = temp_2->next;
        }
        temp = temp->next;
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

    if(check_duplicate_value)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }


    return 0;
}