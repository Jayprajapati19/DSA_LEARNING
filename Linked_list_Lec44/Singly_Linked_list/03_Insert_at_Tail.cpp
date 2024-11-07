// tail ending node ke aage new node add karenga
// tail pointer of node type
// last node darshayenga

#include <iostream>

using namespace std;

class Node
{

    // creation of node
public:
    int data;
    Node *next;

    // COnstrcutor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// inserting new node at head or starting
void InsertAtHead(Node *&head, int d)

// & yaha pe refrence isliye lia hai ki me nahi chahta ki an nayi copy bane waha , changes in original LL

{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
};

// inserting new node at tail or ending of SLL

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
};

// priting the linked list
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // create new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head point to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    // Insert at Tail
    InsertAtTail(tail, 12);

    print(head);

    InsertAtTail(tail, 15);

    print(head);

    return 0;
}