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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp = head;
        int n = 0;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
 
        int j = 0, base = n/k, extra = n%k;
        vector<ListNode*>result(k,NULL);
        ListNode* current = head;
        for (int i = 0; i < k && current != NULL; i++) {
        result[i] = current;  
        int partSize = base + (extra > 0 ? 1 : 0); 
        extra--;

        for (int j = 1; j < partSize; j++) {
            current = current->next;
        }

        ListNode* nextPart = current->next;
        current->next = NULL; 
        current = nextPart;  
    }
    
    return result;
    }
};
