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

void insertAtHead(node *&head, int val)
{
    // new node creation
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val)
{
    // create a new node
    node *n = new node(val);

    // check if the LL is empty

    if (head == NULL)
    {
        head = n;
        return;
    }

    // LL is not empty

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // now we've reached at the end of LL
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

bool searchLL(node *&head, int key)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(node *&head){
    node *doDelete = head;
    head = head->next;

    delete doDelete;
}

void deletionOfNode(node *&head, int val)
{

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

int main()
{

    node *head = NULL;
    insertAtTail(head, 3);
    insertAtTail(head, 9);
    insertAtTail(head, 12);
    insertAtTail(head, 15);
    insertAtTail(head, 18);

    insertAtHead(head, 12345);

    display(head);

    // cout<<searchLL(head,3)<<"\n";

    deletionOfNode(head, 12);

    display(head);

    return 0;
}