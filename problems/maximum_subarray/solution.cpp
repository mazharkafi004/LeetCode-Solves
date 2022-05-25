class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, n = nums.size(), ans = -10001;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (sum > ans)
            {
                ans = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return ans;
    }
};