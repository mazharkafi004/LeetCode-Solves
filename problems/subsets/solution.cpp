class Solution {
public:
    vector<vector<int>> result;
    int n,j;
    void backtrack(int pos, vector<int> cur, vector<int> &nums){
        if(j==cur.size()){
            result.push_back(cur);
            return;
        }
        for(int i= pos; i<n;i++){
            cur.push_back(nums[i]);
            backtrack(i+1,cur,nums);
            cur.pop_back();
        }

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        for(j=0;j<n+1;j++){
            vector<int> cur;
            backtrack(0,cur,nums);
        }
        return result;
    }
};