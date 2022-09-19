/*
    ADD TWO NUMBERS REPRESENTED BY LINKED LIST.
        APPROACH 1 :
            USING REVERSE OF LINKED LISTS.
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

// Inserting at Head in Linked List.
void insertAtHead(Node *&head, int givenData)
{
    Node *temp = new Node(givenData);
    if (head == NULL)
    {
        head = temp;
        return;
    }

    temp->next = head;
    head = temp;
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

// Finding Reverse of Linked List using Recursion.
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

// Adding Two Linked Lists.
void addTwoLinkedList(Node *head1, Node *head2, int carry, Node *&head3)
{
    // Base Case.
    if (head1 == NULL && head2 == NULL && carry == 0)
    {
        return;
    }

    int firstNumber = 0;
    int secondNumber = 0;

    if (head1 != NULL)
        firstNumber = head1->data;
    if (head2 != NULL)
        secondNumber = head2->data;

    int sum = firstNumber + secondNumber + carry;

    int lastDigit = sum % 10;
    carry = sum / 10;
    insertAtHead(head3, lastDigit);

    if (head1 != NULL)
        head1 = head1->next;
    if (head2 != NULL)
        head2 = head2->next;

    // Recurence Relation.
    addTwoLinkedList(head1, head2, carry, head3);
}

int main()
{
    cout << endl
         << endl
         << endl;

    // Creating First Linked List.
    Node *node1 = new Node(1);
    Node *head1 = node1;
    Node *tail1 = node1;

    // Inserting Elements in First Linked List.
    insertAtTail(tail1, 2);
    insertAtTail(tail1, 3);
    insertAtTail(tail1, 4);

    // Creating Second Linked List.
    Node *node2 = new Node(2);
    Node *head2 = node2;
    Node *tail2 = node2;

    // Inserting Elements in Second Linked List.
    insertAtTail(tail2, 6);
    insertAtTail(tail2, 8);

    // Printing Linked Lists.
    cout << "First Linked List is  : ";
    printLinkedList(head1);

    cout << endl;

    cout << "Second Linked List is :   ";
    printLinkedList(head2);

    cout << endl;

    // Reversing Linked Lists.
    head1 = reverseLinkedList(head1);
    head2 = reverseLinkedList(head2);

    // Creating a Linked List for Answer
    Node *head3 = NULL;

    // Finding Sum of Linked Lists.
    int carry = 0;
    addTwoLinkedList(head1, head2, carry, head3);

    // Printing The Answer
    cout << "-------------------------------------" << endl;
    cout << "Sum of Linked Lists is: ";
    printLinkedList(head3);

    // End.

    cout << endl
         << endl
         << endl;
    return 0;
}
