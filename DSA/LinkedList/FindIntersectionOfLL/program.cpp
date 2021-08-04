// ReWatch

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

int interSection(node *&head1, node *&head2)
{
    int l1 = lengthOfLL(head1);
    int l2 = lengthOfLL(head2);

    int d = 0;
    node *ptr1; // bigger
    node *ptr2; // smaller

    // check which LL is bigger 

    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }

    else{
        d =l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while(d){
        ptr1 = ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }


    while(ptr1!=NULL && ptr2==NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }

    }
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

    return 0;
}