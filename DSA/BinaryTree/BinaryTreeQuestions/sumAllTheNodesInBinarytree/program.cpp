#include "bits/stdc++.h"
using namespace std;

int totalSumOfNodes = 0;

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

int sumOfAllNodes(Node *root)
{
    if(root==NULL){
        return 0;
    }
    sumOfAllNodes(root->left);
    totalSumOfNodes += root->data;
    sumOfAllNodes(root->right);

    return totalSumOfNodes;
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

    cout << sumOfAllNodes(root);

    return 0;
}