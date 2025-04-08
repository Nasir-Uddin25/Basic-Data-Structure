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

int size_linked_list(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

// function to get the intersection point of two linked
// list HeadA and HeadB

// Node *intersectPoint(Node *headA, Node *headB)
// {
//     // Iterate over second list for each node
//     // Search it in first list
//     while (headB != NULL)
//     {
//         Node *tmp = headA;
//         while (tmp != NULL)
//         {
//             // If both nodes are same
//             if (tmp == headB)
//                 return headB;
//             tmp = tmp->next;
//         }
//         headB = headB->next;
//     }

//     return NULL;
// }
int main()
{
    // Create first list 10->15->30
    Node *headA = new Node(10);
    Node *a = new Node(15);
    Node *b = new Node(30);

    headA->next = a;
    a->next = b;

    // Create of Second list 3->6->9->15->30
    Node *headB = new Node(3);
    Node *c = new Node(6);
    Node *d = new Node(9);

    headB->next = c;
    c->next = d;

    int sz =  size_linked_list(headB);

    cout << sz << endl;

    // 15 is the intersection point
    // headB->next->next->next = headA->next;

    // Node* intersectioPoint = intersectPoint(headA, headB);
    // if(intersectioPoint == NULL)
    // {
    //     cout << "-1";
    // }
    // else{
    //     cout << intersectioPoint->val << endl;
    // }
    return 0;
}