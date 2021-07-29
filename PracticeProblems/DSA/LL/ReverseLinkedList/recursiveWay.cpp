#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    // create a new node
    node *n = new node(val);

    // check if the LL is empty or not
    if (head == NULL)
    {
        head = n;
        return;
    }

    // LL is not empty
    // transverse the linkedlist
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // now we reached at the end of LL
    temp->next = n;
}

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

node *reverseUsingIterator(node *&head){
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;

}

node *reverseRecursiveWay(node *&head){
    node* newHead = reverseRecursiveWay(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

int main()
{
    node *head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    

    display(head);

    node *newHead=reverseUsingIterator(head);

    display(newHead);

    return 0;
}