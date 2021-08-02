#include "bits/stdc++.h"
using namespace std;

// node declaration
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

// insert at head

void insertAtHead(node *&head, int val)
{
    // new node creation
    node *n = new node(val);
    // point the next of new node to the current head
    n->next = head;
    // and replace the head
    head = n;
}

// inserting at tail
void insertAtTail(node *&head, int val)
{
    // create a new node to add
    node *n = new node(val);

    // now check if the LL is empty
    if (head == NULL)
    {
        head = n;
        return;
    }

    // LL is not empty
    // to traverse through the LL we'll make a temp ptr
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

bool search(node *&head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
}

void deleteAtHead(node *&head)
{
    node *toDelete = head;
    head = head->next;

    delete toDelete;
}

void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

int length(node *&head)
{
    node *temp = head;
    int l = 0;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }

    return l;
}

node *KAppend(node *&head, int k)
{
    node *newHead;
    node *newTail;
    node *tail = head;

    // we want tail to end at the end of LinekdList and
    // so instead of temp pointer we'll use the tail pointer

    int l = length(head);
    // if k >l then
    k = k % l;

    int count = 1;

    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newTail = tail;
        }
        if (count == l - k + 1)
        {
            newHead = tail;
        }
        count++;
        tail = tail->next;
    }

    newTail->next = NULL;
    tail->next = head;

    return newHead;
}

int main()
{
    node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7; i++)
    {
        insertAtTail(head, arr[i]);
    }

    display(head);

    node *newHead = KAppend(head,3);
    display(newHead);

    return 0;
}