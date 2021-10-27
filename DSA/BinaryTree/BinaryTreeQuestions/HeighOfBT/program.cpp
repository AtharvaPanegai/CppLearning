#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Time Complexity of function = O(n)
int calculateHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = calculateHeight(root->left);
    int rightHeigh = calculateHeight(root->right);

    return max(leftHeight, rightHeigh) + 1;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<calculateHeight(root);

    return 0;
}