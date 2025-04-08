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

B_Node* input_tree()
{
    int val;
    cin >> val;
    B_Node *root = new B_Node(val);

    queue<B_Node *> q;
    q.push(root);

    // Let the loop continue until queue is blank
    while (!q.empty())
    {
        // step-1 : Extract from queue
        B_Node *p = q.front();
        q.pop(); // leave from queue

        // step-2 : working with a node that has been extracted from queue
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

        // step-3 : After working with that a node, push the children of that node into queue.
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void level_order(B_Node *root)
{
    // pushing the root's node into the queue by hand
    queue<B_Node *> q;
    q.push(root);

    // Let the loop continue until queue is blank
    while (!q.empty())
    {
        // step-1 : Extract from queue
        B_Node *p = q.front();
        q.pop(); // leave from queue

        // step-2 : Working with a node that has been extracted from queue
        cout << p->val << " ";

        // step -3 : After working that node, push the children of that node into the queue.
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
int main()
{
    B_Node* root = input_tree();

    level_order(root);
    return 0;
}