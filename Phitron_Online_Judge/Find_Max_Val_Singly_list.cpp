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
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

int Find_Max_Val(Node *&head, Node* &tail, vector<int> &v)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        v.push_back(tmp->val);
        tmp = tmp->next;
    }

    int mx = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > mx)
            mx = v[i];
    }


    return mx;
}

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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

    cout << Find_Max_Val(head, tail, val) << endl;
    print_forward(head);
    return 0;
}