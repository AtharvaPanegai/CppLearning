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

int calcHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return max(calcHeight(root->left), calcHeight(root->right)) + 1;
}

int calculateDiameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);

    int currDiameter = lHeight + rHeight + 1;

    int lDiameter = calculateDiameter(root->left);
    int rDiameter = calculateDiameter(root->right);

    return max(currDiameter, max(lDiameter, rDiameter));
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

    cout<<calculateDiameter(root);

    return 0;
}