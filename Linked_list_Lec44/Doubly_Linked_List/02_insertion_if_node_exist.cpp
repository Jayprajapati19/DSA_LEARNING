#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Construcotor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// traversing a Doubly linked list
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

// gives length of Linked list
int getLength(Node *head)
{
    int len = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
};

// Insert at first
void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
};

// insert at last
void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
};

// insert at any position
void InsertAtPosition(Node *&tail, Node *&head, int d, int position)
{

    // Insert at start
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    // insert at Middle in SLL
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at last position in SLL
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    };

    // Creating a node for d Middle
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
};

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);
    // cout << "Doubly LL Length is: " << getLength(head) << endl;

    // insert at head in Doubly LL
    InsertAtHead(head, 11);
    print(head);

    InsertAtHead(head, 19);
    print(head);

    InsertAtHead(head, 14);
    print(head);

    // Insert at tail/Last in Doubly Linked list
    InsertAtTail(tail, 25);
    print(head);

    // insert at position

    InsertAtPosition(tail, head, 2, 100);

    return 0;
};
