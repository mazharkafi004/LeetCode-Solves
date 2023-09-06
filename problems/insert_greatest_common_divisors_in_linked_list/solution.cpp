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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* current = head;
        ListNode* next = head->next;

        while(next!=NULL){
            int gcd = __gcd(current->val,next->val);
            ListNode* newNode = new ListNode(gcd);
            newNode->next = next;
            current->next = newNode;
            current = newNode->next;
            if(current->next==NULL){
                next = NULL;
            }
            else{
                next = current->next;
            }
        }
        return head;
    }
};