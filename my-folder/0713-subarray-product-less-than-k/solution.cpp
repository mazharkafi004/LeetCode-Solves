class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left = 0, right = 0,n = nums.size(),product = 1, ans = 0, count = 0;
        if(k<=1){
            return 0;
        }
        while(right<n){
            product*=nums[right]; 
            while(product>=k){
                product/=nums[left];
                left++;
            }
            count += 1 + (right-left);  
            right++;
        }
        return count;
    }
};
