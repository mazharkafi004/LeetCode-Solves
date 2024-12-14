class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        long long total = 0;
        int left = 0;
        deque<int> minDeque, maxDeque;

        for (int right = 0; right < n; ++right) {
            while (!minDeque.empty() && nums[minDeque.back()] > nums[right]) {
                minDeque.pop_back();
            }
            while (!maxDeque.empty() && nums[maxDeque.back()] < nums[right]) {
                maxDeque.pop_back();
            }
            minDeque.push_back(right);
            maxDeque.push_back(right);

            while (nums[maxDeque.front()] - nums[minDeque.front()] > 2) {
                if (minDeque.front() == left) minDeque.pop_front();
                if (maxDeque.front() == left) maxDeque.pop_front();
                ++left;
            }

            total += (right - left + 1);
        }

        return total;

    }
};
