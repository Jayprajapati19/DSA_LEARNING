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

    // Destructor
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory Free for node with data " << val << endl;
    };
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

void deleteNode(int position, Node *&head, Node *&tail)

{

    // deleting start/first node in DLL
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node in DLL
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        };

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

        // handling tail value
        if (curr->next == NULL)
        {
            tail = prev->next;
        }

        if (prev->next == NULL)
        {
            tail = prev;
        }
    };
};

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

    insertAtPosition(head, tail, 1, 104);
    print(head);

    cout << endl;

    insertAtPosition(head, tail, 8, 102);
    print(head);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    cout << endl;

    // delete at first in DLL

    deleteNode(1, head, tail);
    print(head);
    cout << endl;
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    // delete at middle in DLL
    cout << endl;
    deleteNode(4, head, tail);
    print(head);
    cout << endl;
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    // delete at last in DLL
    cout << endl;
    deleteNode(6, head, tail);
    print(head);
    cout << endl;
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    return 0;
}
