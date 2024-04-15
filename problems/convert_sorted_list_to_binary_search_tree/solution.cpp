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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedVecToBST(vector<int> &vec) {
        if(vec.size()==0){
            return NULL;
        }
        if(vec.size()==1){
            return new TreeNode(vec[0]);
        }
        int mid = vec.size()/2;
        vector<int>left(vec.begin(),vec.begin()+mid);
        vector<int>right(vec.begin()+mid+1,vec.end());
        TreeNode* root = new TreeNode(vec[mid]);
        root->left = sortedVecToBST(left);
        root->right = sortedVecToBST(right);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL) {
            return NULL;
        }
        if(head->next == NULL){
            return new TreeNode(head->val);
        }
        vector<int>vec;
        while(head != NULL) {
            vec.push_back(head->val);
            head = head->next;
        }
        TreeNode* root = sortedVecToBST(vec);
        return root;
    }
};