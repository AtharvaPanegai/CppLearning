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

void sumReplace(Node *root)
{
    if(root==NULL){
        return;
    }
    // calc left and then right
    sumReplace(root->left);
    sumReplace(root->right);

    if (root->left)
    {
        root->data += root->left->data;
    }
    if (root->right)
    {
        root->data += root->right->data;
    }
}

void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
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
    preOrder(root);
    sumReplace(root);
    cout << "After Sum Replacement\n";
    preOrder(root);
    return 0;
}