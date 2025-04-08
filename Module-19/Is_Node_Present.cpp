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
    cin >> val; // Take input root

    B_Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new B_Node(val); // create a root node

    queue<B_Node *> q; // create a queue
    if (root != NULL)
        q.push(root); // pushing the root node into queue by hand

    // Let the loop continue until queue is empty
    while (!q.empty())
    {
        // step -1 : Extract from queue front node
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

        // step - 3: After working a node, pushing the children of node into queue
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

bool isNodePresent(B_Node *root, int x)
{
    if (root == NULL)
        return false;

    // Check the root node of data is equal to x
    if (root->val == x)
        return true;

    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);

    if (l == true || r == true)
        return true;
    else
        false;
}

int main()
{

    B_Node *root = input_tree();
    int val;
    cin >> val;
    bool result = isNodePresent(root, val);
    if (result)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}