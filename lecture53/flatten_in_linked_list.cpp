

Node *merge(Node *left, Node *right)
{
    Node *ans = new Node(-1);
    Node *temp = ans;

    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->child = left;
            temp = left;
            left = left->child;
        }
        else
        {
            temp->child = right;
            temp = right;
            right = right->child;
        }
        temp->next = NULL;
    }

    if (left != NULL)
    {
        temp->child = left;
        temp = left;
        left = left->child;
    }
    temp->next = NULL;

    while (right != NULL)
    {
        temp->child = right;
        temp = right;
        right = right->child;
    }
    temp->next = NULL;

    if (ans->child != NULL)
    {
        ans->child->next = NULL;
    }
    return ans->child;
}

Node *flattenLinkedList(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *mergedHead = flattenLinkedList(head->next);

    head = merge(head, mergedHead);

    return head;
}
