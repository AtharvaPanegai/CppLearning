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

int search(int inOrder[], int start, int end, int val)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == val)
        {
            return i;
        }
    }

    return -1;
}

Node *buildTree(int postOrder[], int inOrder[], int start, int end)
{
    static int idx = 4;

    if (start > end)
    {
        return NULL;
    }

    int val = postOrder[idx];
    idx--;

    Node *node = new Node(val);
    if (start == end)
    {
        return node;
    }

    int pos = search(inOrder, start, end, val);
    node->right = buildTree(postOrder, inOrder, pos + 1, end);
    node->left = buildTree(postOrder, inOrder, start, pos - 1);

    return node;
}

void printInOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

int main()
{
    int postOrder[] = {4, 2, 5, 3, 1};
    int inOrder[] = {4, 2, 1, 5, 3};

    Node *root = buildTree(postOrder, inOrder, 0, 4);
    printInOrder(root);

    return 0;
}