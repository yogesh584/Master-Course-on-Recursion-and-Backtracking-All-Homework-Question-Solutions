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

Node *kReverse(Node *head, int k)
{
    // Base Case
    if (head == NULL)
    {
        return NULL;
    }

    Node *forward = NULL;
    Node *current = head;
    Node *previous = NULL;
    int count = 0;

    while (current != NULL && count < k)
    {
        forward = current->next;
        current->next = previous;
        previous = current;
        current = forward;
        count++;
    }
    if (forward != NULL)
    {
        head->next = kReverse(forward, k);
    }
    return previous;
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

    // Reversing Linked List in Group of K.
    head = kReverse(head, 2);

    printLinkedList(head);

    cout
        << endl
        << endl
        << endl;

    return 0;
}
