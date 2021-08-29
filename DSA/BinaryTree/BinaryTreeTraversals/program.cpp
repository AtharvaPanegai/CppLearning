#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    // constructor
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preOrder(struct Node *root){

    // base condition
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(struct Node *root){
    // base condtion
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void inOrder(struct Node*root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

    //     1
    //    / \
    //   2   3
    //  / \  / \
    // 4   5 6  7

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    inOrder(root);    

    return 0;
} 