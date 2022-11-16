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
    void reorderList(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *tmp = slow->next;
        ListNode *second = slow->next;
        ListNode *prev = slow->next = NULL;
        while (second)
        {
            tmp = second->next;
            second->next = prev;
            prev = second;
            second = tmp;
        }
        ListNode *first = head;
        second = prev;
        ListNode *tmp1;
        ListNode *tmp2;

        while (second)
        {
            tmp1 = first->next;
            tmp2 = second->next;
            first->next = second;
            second->next = tmp1;
            first = tmp1;
            second = tmp2;
        }
    }
};