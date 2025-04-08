#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Insert at the tail of the linked list
void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

// Store all nodes in a vector
void pushVector(Node *head, vector<Node *> &vec) {
    Node *tmp = head;
    while (tmp != NULL) {
        vec.push_back(tmp);
        tmp = tmp->next;
    }
}

// Print the linked list
void print_forward(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Sort the linked list using a vector
Node* sortLinkedList(Node *head) {
    vector<Node *> vec;
    pushVector(head, vec);

    // Sort nodes based on their values in descending order
    sort(vec.begin(), vec.end(), [](Node *a, Node *b) {
        return a->val > b->val; // Descending order
    });

    // Reconstruct the linked list
    for (size_t i = 0; i < vec.size() - 1; i++) {
        vec[i]->next = vec[i + 1];
    }
    vec.back()->next = NULL;

    return vec.front(); // New head after sorting
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val && val != -1) {
        insert_at_tail(head, tail, val);
    }

    cout << "Original List: ";
    print_forward(head);

    head = sortLinkedList(head);

    cout << "Sorted List (Descending Order): ";
    print_forward(head);

    return 0;
}
