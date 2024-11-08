/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };x`
 */

// Optimized approach
Node *getMiddle(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // 2 Node

    if (head->next->next = NULL)
    {
        return head->next;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    retur slow;
}

int getlength(ListNode *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {

        int len = getlength(head);
        int ans = (len / 2);

        ListNode *temp = head;
        int cnt = 0;
        while (cnt < ans)
        {
            temp = temp->next;
            cnt++;
        }

        return temp;
    }
};