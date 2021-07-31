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

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *cycleNode;

    int count = 0;

    while(temp->next!=NULL){
        if(count==pos){
            cycleNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = cycleNode;
}

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool detectCycle(node *&head)
{
    node *slow;
    node *fast;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

void removeCycle(node *&head)
{

    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = NULL;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    makeCycle(head, 3);

    cout << detectCycle(head) << "\n";

    removeCycle(head);

    cout << detectCycle(head);

    // display(head);

    return 0;
}