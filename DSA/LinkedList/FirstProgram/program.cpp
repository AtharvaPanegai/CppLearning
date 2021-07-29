#include "bits/stdc++.h"
using namespace std;

class node{
    public: 
    int data;
    node *next;

    node(int val){
        data = val;
        next = NULL;

    }
};

void insertAtHead(node *&head,int val){
    // new node creation
    node *n = new node(val);
    n->next = head;
    head = n;

}

void insertAtTail(node *&head,int val){
    // create a new node
    node *n = new node(val);

    // check if the LL is empty

    if(head == NULL){
        head = n;
        return;
    }

    // LL is not empty

    node *temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    // now we've reached at the end of LL
    temp->next = n;
}

void display(node *&head){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

bool searchLL(node *&head,int key){
    node *temp = head;
    while(temp->next!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){

    node *head = NULL;
    insertAtTail(head,3);
    insertAtTail(head,3);
    insertAtTail(head,3);
    insertAtTail(head,3);
    insertAtTail(head,3);

    insertAtHead(head,12345);
    
    cout<<searchLL(head,3)<<"\n";

    display(head);

    return 0;
}