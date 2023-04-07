class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
          sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        do{
            vector<int> temp;
            temp = nums;
            ans.push_back(temp);
        }
        while(
            next_permutation(nums.begin(),nums.end())
        );
        return ans;
    }
};