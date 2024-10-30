
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

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " Memory is free for node with data " << value << endl;
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

void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    // iser at starting in SLL
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

    // Creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
};

void deleteNode(int position, Node *&head)

{

    // deleting start/first node in SLL
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;

        // memory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node in SLL
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
};

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

    // InsertAtPosition(head, 1, 13);
    // InsertAtPosition(head, 2, 19);

    // print(head);

    InsertAtPosition(tail, head, 4, 22);
    print(head);

    cout << endl;

    // verify head and tail
    cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;

    deleteNode(3, head);
    print(head);

    return 0;
}
