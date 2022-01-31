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

int main()
{

    struct Node *root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(5);
    return 0;
}