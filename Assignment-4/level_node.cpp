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

void print_level_nodes(B_Node *root, int level)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<B_Node *, int>> q;
    q.push({root, 0});
    bool nodes_found = false;

    while (!q.empty())
    {
        auto [node, current_level] = q.front();
        q.pop();

        if (current_level == level)
        {
            cout << node->val << " ";
            nodes_found = true;
        }

        if (current_level > level)
            break;

        if (node->left)
            q.push({node->left, current_level + 1});
        if (node->right)
            q.push({node->right, current_level + 1});
    }

    if (!nodes_found)
        cout << "Invalid" << endl;
}

int main()
{
    B_Node *root = input_tree();
    int level;
    cin >> level;

    print_level_nodes(root, level);
    return 0;
}