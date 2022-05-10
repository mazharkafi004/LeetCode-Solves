class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int l = 0, r = nums.size() - 1, x = target;
        while (l <= r)
        {
            int m = (r - l) / 2 + l;
            if (nums[m] == x)
            {
                return m;
            }
            else if (nums[m] < x)
            {
                l = m + 1;
            }
            else if (nums[m] > x)
            {
                r = r - 1;
            }
        }

        return l;
    }
};