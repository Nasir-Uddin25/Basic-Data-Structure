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

        
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

bool is_perfect(B_Node *root)
{
    if (root == NULL)
        return true;

    queue<pair<B_Node *, int>> q; 
    q.push({root, 0});

    int max_depth = -1;
    bool all_leaves_depth = true;

    while (!q.empty())
    {
        auto [node, depth] = q.front(); 
        q.pop();

        if (node->left == NULL && node->right == NULL)
        {
            if (max_depth == -1)
                max_depth = depth; 
            else if (depth != max_depth)
                all_leaves_depth = false; 
        }
        else
        {
            
            if (node->left == NULL || node->right == NULL)
                return false;

            if (node->left)
                q.push({node->left, depth + 1});
            if (node->right)
                q.push({node->right, depth + 1});
        }
    }

    return all_leaves_depth;
}
int main()
{
    B_Node *root = input_tree();

    if (is_perfect(root))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
