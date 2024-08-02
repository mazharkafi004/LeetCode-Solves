class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int cnt = accumulate(nums.begin(), nums.begin() + sum, 0);
        int mx = cnt;
        for (int i = sum; i < n + sum; ++i) {
            cnt += nums[i % n] - nums[(i - sum + n) % n];
            mx = max(mx, cnt);
        }
        return sum - mx;
    }
};
