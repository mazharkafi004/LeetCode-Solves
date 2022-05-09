class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0, r = nums.size() - 1, x = target;
        while (l <= r)
        {
            int mid = ((r - l) / 2) + l;
            if (nums[mid] == x)
            {
                return mid;
            }
            else if (nums[mid] > x)
            {

                r = mid - 1;
            }
            else if (nums[mid] < x)
            {
                l = mid + 1;
            }
        }
        return -1;
    }
};
