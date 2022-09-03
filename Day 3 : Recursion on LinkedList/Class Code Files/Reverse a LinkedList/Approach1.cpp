/*
    REVERSE A LINKED LIST
        APPROACH 1 :
            THREE POINTER APPROACH.
*/

#include <iostream>
using namespace std;

// Creating Node For Linked List.
class Node
{
public:
    int data;
    Node *next;

    Node(int givenData)
    {
        this->data = givenData;
        this->next = NULL;
    }
};

// Inserting at After Tail in Linked List.
void insertAtTail(Node *&tail, int givenData)
{
    Node *newNode = new Node(givenData);
    if (tail == NULL)
    {
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// Reversing Linked List.
void reverseLinkedList(Node *&head, Node *prev, Node *curr, Node *forward)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;

    reverseLinkedList(head, prev, curr, forward);
}

// Printing Linked List using Recursion.
void printLinkedList(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    cout << head->data << " ";

    printLinkedList(head->next);
}

int main()
{
    cout << endl
         << endl
         << endl;

    Node *node1 = new Node(15);

    Node *head = node1;
    Node *tail = node1;

    // Addiding Data to Linked List.
    insertAtTail(tail, 35);
    insertAtTail(tail, 3);
    insertAtTail(tail, 5);

    // Printing Linked List.
    printLinkedList(head);
    cout << endl;

    // Reversing Linked List.
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    reverseLinkedList(head, prev, curr, forward);

    printLinkedList(head);

    cout
        << endl
        << endl
        << endl;
    return 0;
}
