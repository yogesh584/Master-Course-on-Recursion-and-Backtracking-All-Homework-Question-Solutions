/*
    PRINT KTH NODE FROM END.
        APPROACH 2 :
            USING LENGTH - K FORMULA.
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

// Finding Length of Linked List.
int FindLengthOfLinkedList(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}

// Finding Kth Node from End.
void printKthNodeFromLast(Node *head, int k, int length, int index)
{
    // Base case
    if (length == 0)
    {
        cout << "Linked List is Empty" << endl;
        return;
    }
    if (k > length)
    {
        cout << "K is greather than length of LinkedList" << endl;
    }
    if ((length - k) == index)
    {
        cout << "Kth Node from last is : " << head->data << endl;
        return;
    }

    printKthNodeFromLast(head->next, k, length, index + 1);
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
    int length = FindLengthOfLinkedList(head);
    printKthNodeFromLast(head, k, length, 0);

    cout
        << endl
        << endl
        << endl;

    return 0;
}
