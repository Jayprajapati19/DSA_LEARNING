#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    };

    // Destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        };
        cout << "Memory is free for node with data " << value << endl;
    };
};

void InsertNode(Node *&tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // Non-empty list

        //    assuming that the element is present in the list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found -> curr is represiting element walah node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
};

// print means travester

void print(Node *tail)
{
    Node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;

    } while (tail != temp);
    cout << endl;
};

void deleteNode(Node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is empty! Please check again" << endl;
        return;
    }
    else
    {
        // non empty list
        // assuming that "value" is preseting in the Linked list
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // 1 node Linked list
        if (curr == prev)
        {
            tail = NULL;
        };

        // >=2 Node Linked List
        if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    Node *tail = NULL;

    // insert in empty list
    InsertNode(tail, 5, 3);
    print(tail);

    InsertNode(tail, 3, 5);
    print(tail);

    /*

    InsertNode(tail, 5, 7);
    print(tail);

    InsertNode(tail, 7, 9);
    print(tail);

    InsertNode(tail, 9, 19);
    print(tail);

    InsertNode(tail, 19, 14);
    print(tail);

    InsertNode(tail, 9, 5);
    print(tail);

    InsertNode(tail, 19, 99);
    print(tail);

    // delete at first
    deleteNode(tail, 3);
    print(tail);

    // delete at middle
    deleteNode(tail, 9);
    print(tail);

    */

    // delete at last
    deleteNode(tail, 3);
    print(tail);

    return 0;
};