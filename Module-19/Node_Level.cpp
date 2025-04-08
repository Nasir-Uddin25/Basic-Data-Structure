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
    if (val == -1) // Handle the case of an empty tree
        root = NULL;

    else
        root = new B_Node(val);
    queue<B_Node *> q;
    if(root)
    q.push(root);

    while (!q.empty())
    {
        // Step 1: Extract node from queue
        B_Node *p = q.front();
        q.pop();

        // Step 2: Working with the extracted node
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

        // Step 3: Push the children into the queue
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int nodeLevel(B_Node *root, int searchValue)
{
    queue<pair<B_Node *, int>> q;

    // Check if the root is null
    if (root != NULL)
        q.push({root, 1}); // Root is at level 1

    while (!q.empty())
    {
        // Step 1: Extract pair from queue
        pair<B_Node *, int> parent = q.front();
        q.pop();

        // Separate the node and level from the pair
        B_Node *Node = parent.first;
        int level = parent.second;

        // Step 2: Process the node
        if (Node->val == searchValue)
            return level;

        // Step 3: Push the children into the queue
        if (Node->left)
            q.push({Node->left, level + 1});
        if (Node->right)
            q.push({Node->right, level + 1});
    }

    // If the searchValue is not found, return -1
    return -1;
}

int main()
{
    B_Node *root = input_tree();

    int t;
    cin >> t;

    while (t--)
    {
        int val;
        cin >> val;
        cout << nodeLevel(root, val) << endl; // Print each result on a new line for better readability
    }

    return 0;
}
