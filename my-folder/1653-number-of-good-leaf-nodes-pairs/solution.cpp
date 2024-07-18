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
    int result = 0;
    
    int countPairs(TreeNode* root, int distance) {
        dfs(root, distance);
        return result;
    }
    
    vector<int> dfs(TreeNode* root, int distance) {
        if (root == NULL)
            return vector<int>(distance + 1, 0);
        if (root->left == NULL && root->right == NULL) {
            vector<int> res(distance + 1, 0);
            res[1]++;
            return res;
        }
        vector<int> left = dfs(root->left, distance);
        vector<int> right = dfs(root->right, distance);
        for (int l = 1; l < left.size(); l++) {
            for (int r = 1; r < right.size(); r++) {
                if (l + r <= distance)
                    result += left[l] * right[r];
            }
        }
        vector<int> res(distance + 1, 0);
        for (int i = res.size() - 2; i >= 1; i--) {
            res[i + 1] = left[i] + right[i];
        }
        return res;   
    }
};
