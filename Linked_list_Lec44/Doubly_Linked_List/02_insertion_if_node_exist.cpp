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
        cout << temp->data;
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

void InsertAtHead(Node *&head, int d) {

};

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;

    print(head);
    cout << "Doubly LL Length is: " << getLength(head) << endl;

    InsertAtHead(head, 11);
    print(head);

    return 0;
};

// 1:6 lec 44