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
    vector<int>bfs(TreeNode* root){
        vector<int>result;
        if(!root){
            return result;
        }
        
        queue<pair<TreeNode*,int>>queue;
        queue.push({root,0});
        while(!queue.empty()){
            auto [node,level] = queue.front();
            queue.pop();
            if(level == result.size()){
                result.push_back(node->val);
            }
            else{
                result[level] = max(result[level],node->val);
            }
                if(node->left){
                    queue.push({node->left,level+1});
                }
                if(node->right){
                    queue.push({node->right,level+1});
                }
            
        }
        return result;
    }
    vector<int> largestValues(TreeNode* root) {
        return bfs(root);
    }
};
