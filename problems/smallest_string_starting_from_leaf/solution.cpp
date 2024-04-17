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
    string bfs(TreeNode* root){
        string s;
        queue<pair<TreeNode*,string>> queue;
        queue.push({root,s});
        string t = "~";
        while(!queue.empty()){
            auto [node,str] = queue.front();
            str = char('a'+node->val) + str;
            queue.pop();
            if(!node->left && !node->right){
                t = min(t,str);
            }
            if(node->left){
                queue.push({node->left,str});
            }
            if(node->right){
                queue.push({node->right,str});
            }
        }
        return t;
    }
    string smallestFromLeaf(TreeNode* root) {
        return bfs(root);
    }
};