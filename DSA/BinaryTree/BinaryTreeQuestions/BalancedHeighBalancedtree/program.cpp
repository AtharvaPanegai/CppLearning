#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    // constructor
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int heightOfTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = heightOfTree(root->left);
    int rh = heightOfTree(root->right);

    return max(lh, rh);
}

bool balancedHeightTree(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    if (balancedHeightTree(root->left) == false)
    {
        return false;
    }
    if (balancedHeightTree(root->right) == false)
    {
        return false;
    }

    int lh = heightOfTree(root->left);
    int rh = heightOfTree(root->right);

    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(6);

    if (balancedHeightTree(root))
    {
        cout << "Balanced Height Tree"
             << "\n";
    }

    return 0;
}