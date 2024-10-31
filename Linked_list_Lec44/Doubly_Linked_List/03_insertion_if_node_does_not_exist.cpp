#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Traversing a Doubly Linked List
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert at the head
void InsertAtHead(Node *&tail, Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// Insert at the tail
void InsertAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// Insert at any position
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // Insert at start
    if (position == 1)
    {
        InsertAtHead(tail, head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1 && temp->next != NULL)
    {
        temp = temp->next;
        cnt++;
    }

    // Insert at last position if reached end of list
    if (temp->next == NULL)
    {
        InsertAtTail(head, tail, d);
        return;
    }

    // Insert at the middle position
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    print(head);

    // Insert at head
    InsertAtHead(tail, head, 11);
    print(head);

    InsertAtHead(tail, head, 19);
    print(head);

    InsertAtHead(tail, head, 14);
    print(head);

    // Insert at tail
    InsertAtTail(head, tail, 25);
    print(head);

    InsertAtTail(head, tail, 26);
    print(head);

    // Insert at position
    insertAtPosition(head, tail, 3, 100);
    print(head);

    insertAtPosition(head, tail, 8, 102);
    print(head);

    insertAtPosition(head, tail, 1, 104);
    print(head);

    return 0;
}
