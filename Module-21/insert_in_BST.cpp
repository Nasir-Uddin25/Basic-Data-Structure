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
    B_Node *root = new B_Node(val);
    queue<B_Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // step - 1 : Extract from queue
        B_Node *p = q.front();
        q.pop();
        // step - 2 : Working with a node that has been extracted from queue
        int l, r;
        cin >> l >> r;
        B_Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new B_Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new B_Node(r);

        p->left = myLeft;
        p->right = myRight;
        // step-3 :Pushing the children of root node into queue
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void insert_in_BST(B_Node *&root, int val)
{
    if (root == NULL)
        root = new B_Node(val);

    if (root->val > val)
    {
        if (root->left == NULL)
            root->left = new B_Node(val);
        else
            insert_in_BST(root->left, val);
    }
    else
    {
        if (root->right == NULL)
            root->right = new B_Node(val);
        else
            insert_in_BST(root->right, val);
    }
}

void level_order(B_Node *root)
{
    queue<B_Node *> q;
    q.push(root);
    while (!q.empty())
    {
        B_Node *p = q.front();
        q.pop();

        cout << p->val << " ";

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
int main()
{
    B_Node *root = input_tree();
    int val;
    cin >> val;
    insert_in_BST(root, val);
    level_order(root);
    return 0;
}