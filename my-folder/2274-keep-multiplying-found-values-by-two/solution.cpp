class Solution
{
public:
    int findFinalValue(vector<int> &nums, int original)
    {

        while (true)
        {
            sort(nums.begin(), nums.end());
            int l = 0, r = nums.size() - 1, check = 0;
            while (l <= r)
            {
                int mid = (r - l) / 2 + l;
                if (nums[mid] == original)
                {
                    original += original;
                    nums[mid] += original;

                    check++;
                    break;
                }
                else if (nums[mid] < original)
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            if (check == 0)
            {
                break;
            }
        }
        return original;
    }
};
