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
bool is_palindrome_linked_list(Node *&head)
{
    vector<int> v;
    Node *temp = head;
    while (temp != NULL)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    for (int i = 0, j = v.size() - 1; i < j; i++, j--)
    {
        if(v[i] != v[j])
        {
            return false;
        }
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
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    if (is_palindrome_linked_list(head))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not palindrome" << endl;
    }

    return 0;
}