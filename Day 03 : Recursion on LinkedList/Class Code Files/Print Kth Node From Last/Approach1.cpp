/*
    PRINT KTH NODE FROM LAST.
        APPROACH 1 : VAPIS AATE SAMAY. (TAIL RECURSION)
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

void printKthNodeFromLast(Node *head, int &k)
{
    if (head == NULL)
    {
        return;
    }

    printKthNodeFromLast(head->next, k);
    k--;
    if (k == 0)
    {
        cout << "kth Node from end is : " << head->data << endl;
    }
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

    // Finding Kth Node From End.
    int k = 3;
    printKthNodeFromLast(head, k);

    cout
        << endl
        << endl
        << endl;

    return 0;
}
