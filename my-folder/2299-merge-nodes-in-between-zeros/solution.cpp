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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* newNode = head;
        while(temp != NULL){
            long long num = 0;
            while(temp->val != 0){
                num+=(long long)temp->val;
                temp = temp->next;
            }
           
            newNode->next = new ListNode(num);
            newNode = newNode->next;
            temp = temp->next;
        }
        return head->next;
    }
};
