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
ListNode* reverse(ListNode* head){
        ListNode* current = head;
        ListNode *prev = NULL, *nxt = NULL;
        while(current!=NULL){
            nxt = current->next;
            current->next = prev;
            prev = current;
            current = nxt;
        }
        return prev; 
    }
    int getDecimalValue(ListNode* head) {
        head = reverse(head);
        int ans = 0, base = 1;
        while(head != NULL){
            ans+= head->val * base;
            base = base*2;
            head = head->next;
        }
        return ans;
    }
};