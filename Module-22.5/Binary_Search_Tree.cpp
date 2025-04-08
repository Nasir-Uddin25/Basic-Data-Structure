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
    // Corner Case handle
    B_Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new B_Node(val);

    queue<B_Node *> q;
    // Pushing the root's node into the queue by hand
    if (root != NULL)
        q.push(root);

    // Let the loop continue until the queue is blank
    while (!q.empty())
    {
        // step 1 : Extract nodes from queues
        B_Node *p = q.front();
        q.pop(); // leave from queue

        // step 2 : Working with a node that has been extracted from the queue
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

        // step 3 : After working with that node, push the children of that node into the queue
        // Corner Case :
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

bool search_BST(B_Node *root, int searchedValue)
{
    if (root == NULL)
        return false;
    if (root->val == searchedValue)
        return true;
    if (root->val > searchedValue)
        return search_BST(root->left, searchedValue);
    else
        return search_BST(root->right, searchedValue);
}
int main()
{
    B_Node *root = input_tree();
    int val;
    cin >> val;
    bool result = search_BST(root, val);
    if (result)
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}