
// This code will result as Time Limit Exceeds (TLE) Error [NOT RECOMMENDED]
// T C = O(N^2)
// S C  = O(1)

Node *removeDuplicates(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *curr = head;

    while (curr != NULL)
    {
        Node *temp = curr;
        while (temp->next != NULL)
        {
            if (curr->data == temp->next->data)
            {
                Node *nextNode = temp->next->next;
                Node *nodeToDelete = temp->next;
                delete (nodeToDelete);
                temp->next = nextNode;
            }
            else
            {
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}