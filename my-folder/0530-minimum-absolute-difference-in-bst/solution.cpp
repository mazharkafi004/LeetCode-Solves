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
    int result = INT_MAX, prev = -1;
    int getMinimumDifference(TreeNode* root) {
        if(root->left){
            getMinimumDifference(root->left);
        }
        if(prev>=0){
            result = min(result,abs(root->val - prev));
        }
        prev = root->val;
        if(root->right){
            getMinimumDifference(root->right);
        }
        return result;
    }
};
