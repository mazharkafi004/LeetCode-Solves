class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {

        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[1] + nums[2], mx = 0;

        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int j = i + 1, k = nums.size() - 1;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (target == sum)
                {
                    return sum;
                }

                mx = target - sum;
                if (abs(mx) < abs(target-ans))
                {
                    ans = sum;
                }
                if (sum > target)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return ans;
    }
};
