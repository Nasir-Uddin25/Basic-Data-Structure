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
    tail = newnode;
}
void reverse_linked_list(Node *&head, Node *tmp)
{
    // Base Case
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse_linked_list(head, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
}

bool isPalindrome(Node *head, Node *tmp)
{
    tmp = head;
    Node *tmp2 = head;
    while (tmp != NULL)
    {
        if (tmp->val != tmp2->val)
            return false;
    }
    tmp = tmp->next;
    tmp2 = tmp2->next;
    return true;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    reverse_linked_list(head, head);
    if (isPalindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    print_linked_list(head);

    return 0;
}