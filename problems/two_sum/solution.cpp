
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> sumCheck;
    for(int i=0;i<nums.size();i++){
        if(sumCheck.count(target-nums[i])){
            return {i,sumCheck[target-nums[i]]};
        }
        else{
            sumCheck[nums[i]]= i;
        }
    }
      return {};

    }
};