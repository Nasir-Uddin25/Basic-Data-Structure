#include <bits/stdc++.h>
using namespace std;

class B_Node
{
public:
    int val;
    B_Node *left;
    B_Node *right;

    B_Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Create recursion function which is called recursion
void inorder(B_Node *root)
{
    if (root == NULL) // base case
        return;

    inorder(root->left);        // left
    inorder(root->right);     // right
    cout << root->val << " "; // root
}
int main()
{
    B_Node *root = new B_Node(10);
    B_Node *a = new B_Node(20);
    B_Node *b = new B_Node(30);
    B_Node *c = new B_Node(40);
    B_Node *d = new B_Node(50);
    B_Node *e = new B_Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    inorder(root);
    return 0;
}