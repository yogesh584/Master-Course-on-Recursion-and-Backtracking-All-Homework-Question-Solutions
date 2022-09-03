/*
    REVERSE A LINKED LIST.
        APPROACH 2 :
            WITHOUT THREE POINTER. (OPTIMISED APPROACH)
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
Node *reverseLinkedList(Node *head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }

    Node *newHead = reverseLinkedList(head->next);

    head->next->next = head;
    head->next = NULL;

    return newHead;
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
    head = reverseLinkedList(head);

    printLinkedList(head);

    cout
        << endl
        << endl
        << endl;
    return 0;
}
