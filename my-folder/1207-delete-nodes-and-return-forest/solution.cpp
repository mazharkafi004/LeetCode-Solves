/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& isRoot) {
        vector<TreeNode*>result;
        set<int>to_delete_set;
        for(int i=0;i<isRoot.size();i++){
            to_delete_set.insert(isRoot[i]);
        }
        helper(root,result,to_delete_set,true);
        return result;
    }
    TreeNode* helper(TreeNode* node, vector<TreeNode*>& result, set<int>& to_delete_set, 
    bool isRoot) {
        if(node==NULL){
            return NULL;
        }
        bool deleted = to_delete_set.find(node->val) != to_delete_set.end();
        if(isRoot && !deleted){
            result.push_back(node);
        }
        node->left = helper(node->left,result,to_delete_set,deleted);
        node->right = helper(node->right,result,to_delete_set,deleted);
        if(deleted){
            return NULL;
        }
        return node;
    }
};
