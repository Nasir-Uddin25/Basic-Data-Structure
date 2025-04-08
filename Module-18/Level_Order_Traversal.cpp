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

void level_order(B_Node *root)
{
    //Chech root is NULL or not.
    if (root == NULL)
    {
        cout << "No Tree" << endl;
        return;
    }
    // STL Queue has been taken that Nodes are queue
    queue<B_Node *> q;

    // Pushing the root's node into the queue by hand
    q.push(root);

    // Let the loop continue until the queue is blank
    while (!q.empty())
    {
        // step 1 : Extract nodes from queues
        B_Node *f = q.front();
        q.pop(); // leave from queue

        // step 2 : Working with a node that has been extracted from the queue
        cout << f->val << " ";

        // step 3 : After working with that node, push the children of that node into the queue
        // Corner Case :
        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
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

    // Calling the level order function to print from the main function
    level_order(root);
    return 0;
}