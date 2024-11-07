#include <iostream>

using namespace std;

// it will return head of the reverse list

Node *reverse1(Node *head)
{

    // ye mera base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    };

    int chotaHead = reverse1(head->next);
};

Node *reverseLinkedList()
{

    return reverse1(head);
};

int main()
{

    return 0;
};