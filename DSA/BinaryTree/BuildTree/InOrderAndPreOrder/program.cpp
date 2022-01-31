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

int searchInInOrder(int inOrder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == curr)
        {
            return i;
        }
    }

    // if nothing found return this
    return -1;
}

// creating a build tre function which returns root node of the binary tree

Node *buildTree(int inOrder[], int preOrder[], int start, int end)
{
    // index variable to traverse through the preOrder
    static int idx = 0;
    // for the invalid condition if start > end
    if (start > end)
    {
        return NULL;
    }
    // store the value of the element at idx in preOrder
    int curr = preOrder[idx];
    // create a node using this curr
    Node *node = new Node(curr);
    // and increment idx
    idx++;
    // now search this curr in inOrder and get it's position

    int pos = searchInInOrder(inOrder, start, end, curr);
    // if there's only one node in the tree
    if (start == end)
    {
        return node;
    }

    // with this position reCall the buildTree function for the left and right SubTree
    // for the left subTre
    node->left = buildTree(inOrder, preOrder, start, pos - 1);
    // for the right subTree
    node->right = buildTree(inOrder, preOrder, pos + 1, end);

    return node;
}

// print inOrder function to check if the code is working properly or not
void printInOrder(Node *root)
{
    // base condition if the root is null
    if (root == NULL)
    {
        return;
    }
    // LDR
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

int main()
{
    int inOrder[] = {4, 2, 1, 5, 3};
    int preOrder[] = {1, 2, 4, 3, 5};

    Node *root = buildTree(inOrder, preOrder, 0, 4);
    printInOrder(root);

    return 0;
}