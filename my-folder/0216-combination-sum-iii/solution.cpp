class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> nums;
        for(int i=1;i<=9;i++){
            nums.push_back(i);
        }
        vector<int> temp;
        backtrack(result,nums,temp,0,n,k);
        return result;
    }
    void backtrack(vector<vector<int>> &result, vector<int> &nums, vector<int> &temp, int start, int target,int len){
        if(target<0){
            return;
        }
        if(target==0){
            if(temp.size()==len){
                result.push_back(temp);
            }
        }
        for(int i=start;i<nums.size();i++){
            temp.push_back(nums[i]);
            backtrack(result,nums,temp,i+1,target-nums[i],len);
            temp.pop_back();
        }
    }
};
