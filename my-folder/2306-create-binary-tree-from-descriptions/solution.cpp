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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>node_list;
        unordered_map<TreeNode*,TreeNode*>parent_nodes;
        int n = descriptions.size();
        for(int i=0;i<n;i++){
            int parent = descriptions[i][0];
            int child = descriptions[i][1];
            bool isLeft = descriptions[i][2];
            TreeNode* parent_address;
            TreeNode* child_address;
            if(node_list.find(parent) != node_list.end()){
                parent_address = node_list[parent] ;
            }
            else{
                parent_address = new TreeNode(parent);
                node_list[parent] = parent_address;
            }
            if(node_list.find(child) != node_list.end()){
                child_address = node_list[child] ;
            }
            else{
                child_address = new TreeNode(child);
                node_list[child] = child_address;
            }
            parent_nodes[child_address] = parent_address;
            if(isLeft){
                parent_address->left = child_address;
            }
            else{
                parent_address->right = child_address;
            }
        }
        TreeNode* root = node_list[descriptions[0][0]];
        while(parent_nodes.find(root) != parent_nodes.end()){
            root = parent_nodes[root];
        }
        return root;
    }
};
