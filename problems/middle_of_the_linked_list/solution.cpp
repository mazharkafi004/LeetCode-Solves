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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *ans = NULL;
        int count = 0, check = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        if (count == 1)
        {
            return head;
        }
        int mid = (count / 2);
        ListNode *current = head;

        while (current != NULL)
        {
            check++;
            if (check == mid)
            {
                ans = current->next;
            }
            current = current->next;
        }
        return ans;
    }
};