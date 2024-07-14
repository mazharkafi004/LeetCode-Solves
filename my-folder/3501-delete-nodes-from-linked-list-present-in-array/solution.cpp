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
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
    unordered_set<int> nums_list(nums.begin(), nums.end());
    
    while (head != nullptr && nums_list.count(head->val)) {
            head = head->next;
    }

    ListNode* current = head;
    while (current != nullptr && current->next != nullptr) {
        if (nums_list.count(current->next->val)) {
                current->next = current->next->next;
        } else {
                current = current->next;
            }
    }

        return head;
    }
};
