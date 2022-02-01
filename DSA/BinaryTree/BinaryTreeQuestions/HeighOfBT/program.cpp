#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Time Complexity => O(n)

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int rHeight = height(root->right);
    int lHeight = height(root->left);

    return max(lHeight, rHeight) + 1;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << height(root);
    return 0;
}