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

// Function to reverse the linked list recursively
Node *reverse1(Node *head)
{
    // Base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // Recursive call to reverse the rest of the list
    Node *chotaHead = reverse1(head->next);

    // Adjusting the pointers
    head->next->next = head;
    head->next = NULL;

    return chotaHead;
}

// Wrapper function for reversing the linked list
Node *reverseLinkedList(Node *head)
{
    return reverse1(head);
}

// Helper function to insert a new node at the end of the linked list
void insertAtEnd(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Helper function to display the linked list
void displayList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;

    // Inserting nodes into the linked list
    insertAtEnd(head, 21);
    insertAtEnd(head, 22);
    insertAtEnd(head, 23);
    insertAtEnd(head, 24);
    insertAtEnd(head, 25);

    cout << "Original List: ";
    displayList(head);

    // Reversing the linked list
    head = reverseLinkedList(head);

    cout << "Reversed List: ";
    displayList(head);

    return 0;
}
