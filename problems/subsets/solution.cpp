class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        generate_subsets(nums,result,0,subset);
        return result;
    }

    void generate_subsets(vector<int>& nums, vector<vector<int>>& result, int pos, vector<int>& subset){
        int n = nums.size();
        if(pos==n){
            result.push_back(subset);
            return;
        }
        subset.push_back(nums[pos]);
        generate_subsets(nums,result,pos+1,subset);
        subset.pop_back();
        generate_subsets(nums,result,pos+1,subset);
    }
};