class Solution
{
public:
    int maximumGap(vector<int> &nums)
    {
        int max = 0;
        int n = nums.size();
        if (n < 2)
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
        {
            int a = nums[i + 1] - nums[i];
            if (a > max)
            {
                max = a;
            }
        }
        return max;
    }
};
