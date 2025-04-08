#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;    // To store the value or data
    Node *next; // Pointer to point the Next Element
    Node *prev; // Pointer to point the Previous Element
    // Constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Function to traverse the doubly linked list
// in forward direction
void forwardTraversal(Node *head)
{
    Node *curr = head;   // Start traversal from the head of the list
    while (curr != NULL) // Continue until current node is not null(end of list)
    {
        cout << curr->val << " "; // Output data of the current node
        curr = curr->next;        // Move to the next node
    }
    cout << endl; // Print newline after traversal
}

// Function to traverse the doubly linked list
// in backward direction
void backwardTraversal(Node *tail)
{
    Node *curr = tail;   // Start traversal from the tail of the list
    while (curr != NULL) // Continue until current node is not null
    {
        cout << curr->val << " "; // Output data of the current node
        curr = curr->prev;        // Move to the previous node
    }
    cout << endl; // Print newline after traversal
}

int findLength(Node *head)
{
    int cnt = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        cnt++;
        curr = curr->next;
    }
    return cnt;
}

// Insert a node at the beginning
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val); // Create a new node
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head; // Make next of it as head
    head->prev = new_node; // Set previous of head as new node
    head = new_node;
}

// Insert a node at the beginning
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val); // Create a new node
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node; // Make next of it as new_node
    new_node->prev = tail; // Set previous of new_node as tail
    tail = new_node;
}

// Insert At Any Position in doubly linked list
void insert_at_any_pos(Node *head, Node *tail, int index, int val)
{
    Node *tmp = head;
    for (int i = 1; i < index; i++)
    {
        tmp = tmp->next;
    }
    Node *new_node = new Node(val);
    new_node->next = tmp->next;
    tmp->next->prev = new_node;
    tmp->next = new_node;
    new_node->prev = tmp;
}

// Delete At Any Position in Singly Linked List
void delete_at_any_pos(Node *head, Node *tail, int index, int val)
{
    Node *curr = head;
    for (int i = 1; i < index; i++)
    {
        curr = curr->next;
    }
    
}
// Print linked list
void print_linked_list(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}
int main()
{
    // Node *head = NULL;
    // Node *tail = NULL;
    // Traversal Functions
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    // forwardTraversal(head);
    // backwardTraversal(tail);
    // cout << findLength(head) << endl;
    // insert_at_head(head,tail, 100);
    // insert_at_head(head,tail, 200);
    // insert_at_tail(head, tail, 100);
    insert_at_any_pos(head, tail, 2, 100);
    print_linked_list(head);

    return 0;
}