class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<5){
            return 0;
        }
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int a = nums[n-3-1] - nums[0];
        int b = nums[n-3] - nums[1];
        int c = nums[n-2] - nums[2];
        int d = nums[n-1] - nums[3];
        return min(min(a,b),min(c,d));
    }
};
