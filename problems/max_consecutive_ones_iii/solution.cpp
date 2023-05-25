class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxCount = 0;
        int left = 0;
        int right = 0;
        int n = nums.size();
        int zerosCount = 0;

        while (right < n) {
            if (nums[right] == 0) {
                zerosCount++;
            }

            while (zerosCount > k) {
                if (nums[left] == 0) {
                    zerosCount--;
                }
                left++;
            }

            maxCount = max(maxCount, right - left + 1);
            right++;
        }

        return maxCount;
    }
};