class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int result = 0;
        int left = 0;
        for (int right = 0; right < n; ++right) {
            while (nums[right] - nums[left] > 2 * k) {
                left++;
            }
            result = max(result, right - left + 1);
        }
        
        return result;
    }
};
