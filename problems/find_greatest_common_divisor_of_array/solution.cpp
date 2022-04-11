class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums[0], m = nums[nums.size() - 1];
        int ans = 0;
        for (int i = 1; i <= m; i++)
        {
            if (n % i == 0 && m % i == 0)
            {
                ans = i;
            }
        }
        return ans;
    }
};