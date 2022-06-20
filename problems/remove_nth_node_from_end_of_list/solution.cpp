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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp = head;
        int count = 0, check = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        if (count - n == 0)
        {
            return head->next;
        }
        ListNode *current = head;
        while (current != NULL)
        {
            check++;
            if (check == (count - n))
            {
                current->next = current->next->next;
            }

            current = current->next;
        }
        return head;
    }
};