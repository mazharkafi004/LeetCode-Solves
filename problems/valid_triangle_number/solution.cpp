class Solution
{
public:
    int triangleNumber(vector<int> &nums)
    {
        int ans = 0, k = nums.size() - 1;

        sort(nums.begin(), nums.end());
        while (k > 1)
        {
            int i = 0, j = k - 1;
            while (i < j)
            {
                if (nums[i] + nums[j] > nums[k])
                {
                    ans += j - i;
                    j--;
                }
                else
                {
                    i++;
                }
            }
            k--;
        }
        return ans;
    }
};