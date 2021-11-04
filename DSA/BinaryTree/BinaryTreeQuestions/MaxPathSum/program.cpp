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

int maxSum(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int sumofNodes = 0;
    sumofNodes += root->data;

    sumofNodes += max(maxSum(root->left), maxSum(root->right));

    return sumofNodes;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(-6);

    cout << maxSum(root);

    return 0;
}