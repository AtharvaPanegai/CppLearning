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

void insertAtHead(node *&head,int val){
    node *n = new node(val);
    n->next = head;
    head = n;

}


void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    // check if the LL is Empty

    if (head == NULL)
    {
        head = n;
        return;
    }

    // transverse
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // now we reached the end of LL
    temp->next = n;
}

void displayLL(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* &head,int key){
    node *temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    node* head =NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtHead(head,12); 
    cout<<search(head,3)<<endl;

    displayLL(head);


    return 0;
}