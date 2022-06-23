/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {

        unordered_set<ListNode *> node_count;
        while (head != NULL && !node_count.count(head))
        {
            node_count.insert(head);
            head = head->next;
        }
        return head;
    }
};
