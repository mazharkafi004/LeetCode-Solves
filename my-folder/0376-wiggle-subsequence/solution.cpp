class Solution
{
public:
    int wiggleMaxLength(vector<int> &nums)
    {
        int l = 0, r = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[i - 1])
            {
                l = r + 1;
            }
            else if (nums[i] < nums[i - 1])
            {
                r = l + 1;
            }
        }
        return max(l + 1, r + 1);
    }
};
