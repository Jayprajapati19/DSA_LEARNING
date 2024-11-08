/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {

        ListNode *temp = head;
        int len = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            len++;
        }
        // Base Case
        if (len < k || len == 0)
        {
            return head;
        }

        // step 1 : reverse in k group
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *nextNode = NULL;
        int count = 0;

        while (curr != NULL && count < k)
        {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            count++;
        }

        // step 2 : recursion
        if (nextNode != NULL)
        {
            head->next = reverseKGroup(nextNode, k);
        }

        // step 3 : return head of reverse list
        return prev;
    }
};