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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> que;
        que.push(root);
        double sum = 0;
        while(!que.empty()){
            sum = 0;
            int n = que.size();
            for(int i=0;i<n;i++){
            TreeNode* temp = que.front();
            que.pop();
            sum+=temp->val;
            if(temp->left){
                que.push(temp->left);
            }
            if(temp->right){
                que.push(temp->right);
            }
            }
            ans.push_back(sum/n);
        }
        return ans;
        
    }
};
