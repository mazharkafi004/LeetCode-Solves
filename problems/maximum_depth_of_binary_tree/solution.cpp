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
    int bfs(TreeNode* root){
        int mx = 0;
        queue<pair<TreeNode*,int>>queue;
        queue.push({root,1});
        while(!queue.empty()){
            auto [node,depth] = queue.front();
            queue.pop();
            mx = max(mx,depth);
            if(node->left){
                queue.push({node->left,depth+1});
            }
            if(node->right){
                queue.push({node->right,depth+1});
            }
        }
        return mx;
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
       int ans =  bfs(root);
       return ans;
    }
};