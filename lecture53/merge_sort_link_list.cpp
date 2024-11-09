
class Solution
{

private:
    ListNode *findMid(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode *mergeSort(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        // Step 1: find mid of the linked list
        ListNode *mid = findMid(head);

        // Step 2: divide the list into two halves
        ListNode *list1 = head;
        ListNode *list2 = mid->next;
        mid->next = NULL;

        // Step 3: sort lists recursively
        list1 = mergeSort(list1);
        list2 = mergeSort(list2);

        // Step 4: merge the lists
        ListNode *result = merge(list1, list2);

        // Step 5: return the merged list
        return result;
    }

    ListNode *merge(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;

        ListNode *ans = new ListNode(-1);
        ListNode *temp = ans;

        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val < list2->val)
            {
                temp->next = list1;
                temp = list1;
                list1 = list1->next;
            }
            else
            {
                temp->next = list2;
                temp = list2;
                list2 = list2->next;
            }
        }

        while (list1 != NULL)
        {
            temp->next = list1;
            temp = list1;
            list1 = list1->next;
        }

        while (list2 != NULL)
        {
            temp->next = list2;
            temp = list2;
            list2 = list2->next;
        }

        ans = ans->next;
        return ans;
    }

public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        return merge(list1, list2);
    }
};
