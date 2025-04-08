
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

void find_leaf_nodes(B_Node *root, vector<int> &v)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
        return;
    }

    find_leaf_nodes(root->left, v);
    find_leaf_nodes(root->right, v);
}
void print_descending(B_Node *root)
{
    vector<int> v;
    find_leaf_nodes(root, v);

    sort(v.begin(), v.end(), greater<int>());


    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    B_Node *root = input_tree();

    print_descending(root);
    return 0;
}