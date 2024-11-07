#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Recursive Approach for reverse Linked list

void reverse(Node *&head, Node *curr, Node *prev)
{
    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    };

    // recursive call
    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
};

Node *reverseLinkList(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    reverse(head, curr, prev);
    return head;
};

void print_linkedList(Node *head)
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

    // Creating a linked list with nodes 1 -> 2 -> 3 -> 4 -> 5
    Node *head = new Node(11);
    head->next = new Node(12);
    head->next->next = new Node(13);
    head->next->next->next = new Node(14);
    head->next->next->next->next = new Node(15);

    cout << "Original Linked List: ";
    print_linkedList(head);

    // Reversing the linked list
    head = reverseLinkList(head);

    cout << "Reversed Linked List: ";
    print_linkedList(head);

    return 0;
};