#include <iostream>
#include <unordered_map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *arb; // for random pointer

    Node(int d)
    {
        data = d;
        next = nullptr;
        arb = nullptr;
    }
};

// Function to insert a new node at the tail of the linked list
void insertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (head == nullptr)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

// Function to clone a linked list with next and arbitrary pointers
Node *copyList(Node *head)
{
    // Write your code here
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *temp = head;

    // step 1 : creating a clone of linked list
    while (temp != NULL)
    {
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }

    // step 2 : creating map of nodes
    unordered_map<Node *, Node *> mp;

    Node *originalNodeList = head;
    Node *cloneNodeList = cloneHead;

    // setting up the mapping
    while (originalNodeList != NULL && cloneNodeList != NULL)
    {
        mp[originalNodeList] = cloneNodeList;
        originalNodeList = originalNodeList->next;
        cloneNodeList = cloneNodeList->next;
    }

    // step 3 : now setting up the random pointers
    originalNodeList = head;
    cloneNodeList = cloneHead;

    while (originalNodeList != NULL && cloneNodeList != NULL)
    {
        cloneNodeList->arb = mp[originalNodeList->arb];
        originalNodeList = originalNodeList->next;
        cloneNodeList = cloneNodeList->next;
    }

    return cloneHead;
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << "Node: " << temp->data;
        if (temp->arb)
        {
            cout << ", Random points to: " << temp->arb->data;
        }
        else
        {
            cout << ", Random points to: NULL";
        }
        cout << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;

    // Creating the original list
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);

    // Setting up random pointers
    head->arb = tail;             // 1's random pointer to 4
    head->next->arb = head;       // 2's random pointer to 1
    head->next->next->arb = tail; // 3's random pointer to 4
    tail->arb = head->next;       // 4's random pointer to 2

    cout << "Original list:\n";
    printList(head);

    // Cloning the list
    Node *clonedHead = copyList(head);

    cout << "\nCloned list:\n";
    printList(clonedHead);

    return 0;
}
