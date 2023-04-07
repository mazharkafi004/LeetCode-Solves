class Solution {
public:
    void backtrack(vector<vector<int>>& result,int start, int end, vector<int>& nums){
       if(start==end){
           result.push_back(nums);
       }
       else{
           for(int i=start;i<=end;i++){
           swap(nums[i],nums[start]);
           backtrack(result,start+1,end,nums);
           swap(nums[start],nums[i]);
           }
       }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        backtrack(ans,0,nums.size()-1,nums);
        return ans;
    }
};