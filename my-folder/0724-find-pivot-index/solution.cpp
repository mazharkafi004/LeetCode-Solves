class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0,n = nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int left = 0,prefix_sum = 0;
        while(left<n){  
            if(prefix_sum == (sum-prefix_sum-nums[left])){
                return left;
            }
            prefix_sum+=nums[left];
            left++;
        }
        return -1;
    }
};
