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

B_Node *input_tree()
{
    int val;
    cin >> val;
    B_Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new B_Node(val);

    queue<B_Node *> q;
    if (root != NULL)
        q.push(root);

    while (!q.empty())
    {
        B_Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        B_Node *myLeft = (l == -1) ? NULL : new B_Node(l);
        B_Node *myRight = (r == -1) ? NULL : new B_Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void print_left_boundary(B_Node *node)
{
    while (node)
    {
        if (node->left || node->right) // Exclude leaf nodes
            cout << node->val << " ";

        if (node->left)
            node = node->left;
        else
            node = node->right;
    }
}

void print_leaf_nodes(B_Node *node)
{
    if (!node)
        return;

    if (!node->left && !node->right) // Leaf node
    {
        cout << node->val << " ";
        return;
    }

    print_leaf_nodes(node->left);
    print_leaf_nodes(node->right);
}

void print_right_boundary(B_Node *node)
{
    stack<int> s; // Reverse order storage
    while (node)
    {
        if (node->left || node->right) // Exclude leaf nodes
            s.push(node->val);

        if (node->right)
            node = node->right;
        else
            node = node->left;
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

void print_outer_boundary(B_Node *root)
{
    if (!root)
        return;

    cout << root->val << " "; // Print root

    // Print left boundary (excluding root and leaves)
    if (root->left)
        print_left_boundary(root->left);

    // Print all leaf nodes
    print_leaf_nodes(root);

    // Print right boundary in reverse (excluding root and leaves)
    if (root->right)
        print_right_boundary(root->right);
}

int main()
{
    B_Node *root = input_tree();
    print_outer_boundary(root);
    return 0;
}
