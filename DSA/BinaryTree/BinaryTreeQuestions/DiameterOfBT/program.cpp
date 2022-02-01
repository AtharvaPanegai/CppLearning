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

// O(n^2)

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

int calcDiameter(Node *root, int* height)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int ld = calcDiameter(root->left, &lh);
    int rd = calcDiameter(root->right, &rh);

    int currDiameter = lh + rh + 1;

    *height = max(lh, rh) + 1;

    return max(currDiameter, max(ld, rd));
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
    int *height=0;
    cout << calcDiameter(root,height);

    return 0;
}