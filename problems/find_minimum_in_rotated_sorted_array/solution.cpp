class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int target = nums[0];
        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            if (nums[l] < nums[r])
            {
                return nums[l];
            }
            int mid = (r - l) / 2 + l;

            if (nums[mid] >= nums[l] && nums[mid] >= nums[r])
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }
        return nums[l];
    }
};