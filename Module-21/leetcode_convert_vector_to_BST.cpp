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

B_Node *convert_vector_to_BST(vector<int> v, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    B_Node *root = new B_Node(v[mid]);

    B_Node *leftroot = convert_vector_to_BST(v, l, mid - 1);
    B_Node *rightroot = convert_vector_to_BST(v, mid + 1, r);

    root->left = leftroot;
    root->right = rightroot;
    return root;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    B_Node *root = convert_vector_to_BST(v, 0, n - 1);
    level_order(root);
    return 0;
}