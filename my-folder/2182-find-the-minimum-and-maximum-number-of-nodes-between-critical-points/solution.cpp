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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        head = head->next;
        vector<int> critical_points;
        int i = 1;
        while(head != NULL && head->next != NULL){
            i++;
            if(prev->val < head->val && head->val > head->next->val){
                critical_points.push_back(i);
            }
            else if(prev->val > head->val && head->val < head->next->val){
                critical_points.push_back(i);
            }
            prev = head;
            head = head->next;
            // i++;
        }
        if(critical_points.size()<2){
            return {-1,-1};
        }
        vector<int>result(2);
        result[0] = INT_MAX;
        result[1] = INT_MIN;
        int mx = critical_points[0];
        int mn = critical_points[0];
        for(int i=1;i<critical_points.size();i++){
            // cout<<critical_points[i]<<endl;
            mx = max(mx,critical_points[i]);
            mn = min(mn,critical_points[i]);
            // cout<<mx<<" "<<mn<<endl;
            result[0] = min(result[0],(critical_points[i]-critical_points[i-1]));
            result[1] = max(result[1],(mx-mn));
            // cout<<result[0]<<" "<<result[1]<<endl;
        }
        
        return result;
    }
};
