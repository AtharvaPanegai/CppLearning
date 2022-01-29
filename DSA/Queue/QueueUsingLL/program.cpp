// queue using LinkedList
#include "bits/stdc++.h"
using namespace std;

// first create node
class node
{
public:
    int data;
    node *next;

    // node constructor
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// class for queue
class myQueue
{
public:
    // front and back pointers
    node *front;
    node *back;

    // queue constructor
    myQueue()
    {
        front = NULL;
        back = NULL;
    }

    // all the functions
    void enQueue(int x)
    {
        // create a new node
        node *newNode = new node(x);
        // check if the queue is empty
        // if it's empty then push front and back to newNode
        if (front == NULL)
        {
            front = newNode;
            back = newNode;
            return;
        }
        // if it's not the first node
        back->next = newNode;
        back = newNode;
    }

    void deQeue()
    {
        // check if the Queue is empty or not
        if (front == NULL)
        {
            cout << "Queue is empty\n";
            return;
        }
        // if its not empty then
        // store the node and delete it
        node *nodeTobeDeleted = front;
        front++;
        delete nodeTobeDeleted;
    }

    // the data at the tip of Queue
    int peek()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        return front->data;
    }

    // check if the queue is empty or not
    bool empty()
    {
        return (front == NULL);
    }
};

int main()
{

    return 0;
}