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

void LevelOrderTraversal(Node *root)
{
    queue<Node *> q;
    // initially push the root along with the NULL in the queue
    q.push(root);
    q.push(NULL);

    // now till the queue becomes empty
    while (!q.empty())
    {
        // store the front of queue in the node to check for its left and right subTree
        Node *node = q.front();
        // pop it from the queue
        q.pop();
        if (node != NULL)
        {
            // print it's data and check for the left and right subTree
            cout << node->data << " ";
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {

                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->left->right = new Node(5);
    root->left->left = new Node(4);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    LevelOrderTraversal(root);

    return 0;
}