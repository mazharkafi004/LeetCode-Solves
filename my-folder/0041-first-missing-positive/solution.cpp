class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0)
            {
                if (nums[i] == nums[i - 1])
                {
                    nums.erase(nums.begin() + (i - 1));
                    i--;
                }
            }
            if (nums[i] <= 0)
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        if (nums.size() == 0)
        {
            return 1;
        }
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            if (j != nums[i])
            {
                ans = j;
                break;
            }
        }
        if (ans == 0)
        {
            ans = nums[nums.size() - 1] + 1;
        }
        return ans;
    }
};
