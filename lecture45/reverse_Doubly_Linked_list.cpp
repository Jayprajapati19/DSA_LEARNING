#include <iostream>

Node *reverseDLL(Node *head)
{

    if (head == null || head->next == null)
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *nextNode = NULL;

    while (curr != NULL)
    {
        nextNode = curr->next;
        curr->next = prev;
        curr->prev = nextNode;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

using namespace std;

int main()
{
}