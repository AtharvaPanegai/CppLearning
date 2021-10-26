#include "bits/stdc++.h"
using namespace std;
int numberOfNodes = 0;

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

int sumofNodes(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    return sumofNodes(root->left) + sumofNodes(root->right) + 1;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << sumofNodes(root);

    return 0;
}