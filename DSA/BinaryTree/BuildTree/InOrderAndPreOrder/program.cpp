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

int searchFunction(int inOrder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == curr)
        {

            return i;
        }
    }
    return -1;
}

Node *buildTree(int preOrder[], int inOrder[], int start, int end)
{
    static int idx = 0;

    if (start > end)
    {
        return NULL;
    }

    int curr = preOrder[idx];
    idx++;
    Node *root = new Node(curr);
    int pos = searchFunction(inOrder, start, end, curr);
    if (start == end)
    {
        return root;
    }
    root->left = buildTree(preOrder, inOrder, start, pos - 1);
    root->right = buildTree(preOrder, inOrder, pos + 1, end);

    return root;
}

void inOrderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderPrint(root->left);
    cout << root->data << " ";
    inOrderPrint(root->right);
}

int main()
{
    int preOrder[] = {1, 2, 4, 3, 5};
    int inOrder[] = {4, 2, 1, 5, 3};

    Node *root = buildTree(preOrder,inOrder,0,4);
    inOrderPrint(root);
    return 0;
}