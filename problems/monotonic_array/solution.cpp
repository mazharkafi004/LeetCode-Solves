class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return true;
        }
        int increasing = 0, decreasing = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] > nums[i])
            {
                decreasing++;
            }
            else if (nums[i - 1] < nums[i])
            {
                increasing++;
            }
        }
        if (decreasing == 0 || increasing == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};