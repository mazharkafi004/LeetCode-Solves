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
    void reverse(TreeNode* leftChild,TreeNode* rightChild,int level){
        if(leftChild == NULL and rightChild == NULL) return;
        if(level%2==1){
            swap(leftChild->val,rightChild->val);
        }
        reverse(leftChild->left,rightChild->right,level+1);
        reverse(leftChild->right,rightChild->left,level+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        reverse(root->left,root->right,1);
        return root;
    }
};
