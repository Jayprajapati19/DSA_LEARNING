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

// inserting new node at head or starting Of SLL
void InsertAtHead(Node *&head, int d)

// & yaha pe refrence isliye lia hai ki me nahi chahta ki an nayi copy bane waha , changes in original LL

{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

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

    print(head);
    // Insert at head
    InsertAtHead(head, 12);
    print(head);

    InsertAtHead(head, 15);

    print(head);

    return 0;
}
