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

node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currentptr = head;
    node *nextptr = head->next;

    while (currentptr != NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = prevptr;

        prevptr = currentptr;
        currentptr = nextptr;
    }

    return prevptr;
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

    node *newHead = reverse(head);
    display(newHead);

    // display(head);
    return 0;
}