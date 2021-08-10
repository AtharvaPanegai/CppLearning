// here we've to append last k nodes

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
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
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

int lengthOfLL(node *&head)
{
    node *temp = head;
    int l = 0;
    while (temp->next != NULL)
    {
        temp = temp->next;
        l++;
    }

    return l;
}

node *KAppend(node *&head, int k)
{
    node *newHead;
    node *newTail;
    node *tail = head;
    int l = lengthOfLL(head);
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
        tail = tail->next;
        count++;
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