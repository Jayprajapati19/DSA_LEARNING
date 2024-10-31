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

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
};

void InsertAtTail()
{
}

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;

    print(head);
    // cout << "Doubly LL Length is: " << getLength(head) << endl;

    // insert at head in Doubly LL
    InsertAtHead(head, 11);
    print(head);

    InsertAtHead(head, 19);
    print(head);

    InsertAtHead(head, 14);
    print(head);

    return 0;
};
