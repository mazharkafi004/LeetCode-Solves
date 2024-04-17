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
    TreeNode* bfs(TreeNode* root1, TreeNode* root2){
        queue<pair<TreeNode*,TreeNode*>>queue;
        queue.push({root1,root2});
        while(!queue.empty()){
            auto [node1,node2] = queue.front();
            queue.pop();
            node1->val += (node2 != NULL) ? node2->val : 0 ;
            if(node1->left && node2->left){
                queue.push({node1->left,node2->left});
            }
            else if(node2 && node2->left){
                node1->left = node2->left;
            }
            
            if(node1->right && node2->right){
                queue.push({node1->right,node2->right});
            }
            else if(node2 && node2->right){
                node1->right = node2->right;
            }
        }
        return root1;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL) {
            return root2;
        }
        if(root2 == NULL) {
            return root1;
        }
        return bfs(root1,root2);
    }
};
