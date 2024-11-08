

// T C = O(N)
// S C = O(N)

Node *removeDuplicates(Node *head)
{
    Node *curr = head;
    unordered_set<int> seen;

    if (curr == NULL)
    {
        return head;
    }
    else
    {
        seen.insert(curr->data);
    }

    while (curr != NULL && curr->next != NULL)
    {
        if (seen.find(curr->next->data) != seen.end())
        {
            // same elements
            curr->next = curr->next->next;
        }
        else
        {
            seen.insert(curr->next->data);
            curr = curr->next;
        }
    }
    return head;
}