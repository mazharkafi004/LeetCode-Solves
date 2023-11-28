class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0, max_average = INT_MIN;
        int left = 0, right = 0;

        while (right < nums.size()) {
            sum += nums[right];

            if (right - left + 1 == k) {
                max_average = max(max_average, sum / k);
                sum -= nums[left];
                left++;
            }

            right++;
        }

        return max_average;
    }
};

