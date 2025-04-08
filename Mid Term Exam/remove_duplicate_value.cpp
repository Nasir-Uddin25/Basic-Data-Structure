/* #include <bits/stdc++.h>
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
void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while(1)
    {
        cin >> value;
        if(value == -1)
        {
            break;
        }
        insert_at_tail(head, tail, value);
    }

    list <int> myList(val);
    myList.sort();

    print_linked_list(head);
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;

    int val;
    while(1)
    {
        cin >> val;
        if(val == -1)
        break;

        myList.push_back(val);
    }

    myList.sort();
    myList.unique();

    for(int i : myList)
    {
        cout << i <<" ";
    }
    return 0;
}