class Solution
{
public:
    int specialArray(vector<int> &nums)
    {
        int l = 0, r = nums.size();
        while (l <= r)
        {
            int mid = (r - l) / 2 + l;
            int count = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] >= mid)
                {
                    count++;
                }
            }
            if (count == mid)
            {
                return count;
            }
            else if (count < mid)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return -1;
    }
};
