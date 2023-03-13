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
    bool bfs(TreeNode* left,TreeNode* right){
        if(!left && !right){
            return true;
        }
         if(!left || !right){
            return false;
        }
        return (left->val==right->val )  && bfs(left->right,right->left) && bfs(left->left,right->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return false;
        }
        return bfs(root->left, root->right);
    }
};